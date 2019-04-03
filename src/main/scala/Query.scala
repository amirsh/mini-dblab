package dblab

import scala.collection.mutable.{ HashMap, ArrayBuffer, Set }

object MultiMap {
  def apply[K, V]: scala.collection.mutable.MultiMap[K, V] = new HashMap[K, Set[V]] with scala.collection.mutable.MultiMap[K, V]
}

class Query[T](private val underlying: List[T]) {
  def this(arr: Array[T]) = this(arr.toList)
  def map[S](f: T => S): Query[S] =
    new Query(underlying.map(f))
  def filter(p: T => Boolean): Query[T] =
    new Query(underlying.filter(p))
  def foldLeft[S](z: S)(f: (S, T) => S): S =
    underlying.foldLeft(z)(f)
  def foreach(f: T => Unit): Unit =
    underlying.foreach(f)
  def sum(implicit num: Numeric[T]): T =
    underlying.sum
  def count: Int =
    underlying.size
  def avg(implicit num: Fractional[T]): T =
    num.div(sum, num.fromInt(count))
  def groupBy[K](par: T => K): GroupedQuery[K, T] =
    new GroupedQuery(underlying.groupBy(par))
  def filteredGroupBy[K](pred: T => Boolean, par: T => K): GroupedQuery[K, T] =
    new GroupedQuery(underlying.filter(pred).groupBy(par))
  // def groupByMapValues[K, S](par: T => K)(f: Query[T] => S): Query[(K, T)] = {
  //   groupBy(par).mapValues(f)
  // }
  def sortBy[S](f: T => S)(implicit ord: Ordering[S]): Query[T] =
    new Query(underlying.sortBy(f))

  // for verification purposes
  def isSortedBy[S](f: T => S)(implicit ord: Ordering[S]): Boolean = {
    underlying match {
      case Nil => true
      case hd :: tail =>
        var current = hd
        var rest = tail
        while (rest.nonEmpty) {
          val tmp = rest.head
          if (ord.compare(f(current), f(tmp)) > 0) {
            // println(s"caused by $current and $tmp")
            return false
          }
          current = tmp
          rest = rest.tail
        }
        true
    }
  }

  def sortByReverse[S](f: T => S)(implicit ord: Ordering[S]): Query[T] =
    new Query(underlying.sortBy(f).reverse)

  def take(i: Int): Query[T] =
    new Query(underlying.take(i))

  def minBy[S](f: T => S)(implicit ord: Ordering[S]): T =
    underlying.minBy(f)

  def getList: List[T] = underlying

  def materialize: Query[T] = this

  def printRows(printFunc: T => Unit, limit: Int): Unit = {
    var rows = 0
    if (limit == -1) {
      for (e <- this) {
        // printf(format, elems.map(_(e)): _*)
        printFunc(e)
        rows += 1
      }
    } else {
      while (rows < limit && rows < underlying.size) {
        val e = underlying(rows)
        // printf(format, elems.map(_(e)): _*)
        printFunc(e)
        rows += 1
      }
    }
    printf("(%d rows)\n", rows)
  }

  def hashJoin[S, R](q2: Query[S])(leftHash: T => R)(rightHash: S => R)(joinCond: (T, S) => Boolean): Query[(T, S)] = {
    val res = ArrayBuffer[(T, S)]()
    val hm = MultiMap[R, T]
    for (elem <- underlying) {
      hm.addBinding(leftHash(elem), elem)
    }
    for (elem <- q2.getList) {
      val k = rightHash(elem)
      hm.get(k) foreach { tmpBuffer =>
        var cnt = 0
        tmpBuffer foreach { bufElem =>
          if (joinCond(bufElem, elem)) {
            res += bufElem -> elem
            cnt += 1
          }
        }
        if (cnt > 1) {
          throw new Exception("This join is for the N-M case")
        }
      }
    }
    new Query(res.toList)
  }

  def leftHashSemiJoin[S, R](q2: Query[S])(leftHash: T => R)(rightHash: S => R)(joinCond: (T, S) => Boolean): Query[T] = {
    val res = ArrayBuffer[T]()
    val hm = MultiMap[R, S]
    for (elem <- q2.getList) {
      hm.addBinding(rightHash(elem), elem)
    }
    for (elem <- underlying) {
      val k = leftHash(elem)
      hm.get(k) foreach { tmpBuffer =>
        if (tmpBuffer.exists(bufElem => joinCond(elem, bufElem)))
          res += elem
      }
    }
    new Query(res.toList)
  }
}

object Query {
  def apply[T](underlying: List[T]): Query[T] = new Query(underlying)
  def apply[T](underlying: Array[T]): Query[T] = new Query(underlying)
}
/*
class JoinableQuery[T <: Record](private val underlying: List[T]) {
  def hashJoin[S <: Record, R](q2: Query[S])(leftHash: T => R)(rightHash: S => R)(joinCond: (T, S) => Boolean): Query[DynamicCompositeRecord[T, S]] = {
    /* Naive implementation */
    // new Query(underlying.flatMap(e1 =>
    //   q2.getList.flatMap(e2 =>
    //     if (joinCond(e1, e2))
    //       List(e1.concatenateDynamic(e2))
    //     else
    //       Nil)))
    /* Implementation using MultiMap */
    val res = ArrayBuffer[DynamicCompositeRecord[T, S]]()
    val hm = MultiMap[R, T]
    for (elem <- underlying) {
      hm.addBinding(leftHash(elem), elem)
    }
    for (elem <- q2.getList) {
      val k = rightHash(elem)
      hm.get(k) foreach { tmpBuffer =>
        var cnt = 0
        tmpBuffer foreach { bufElem =>
          if (joinCond(bufElem, elem)) {
            res += bufElem.concatenateDynamic(elem)
            cnt += 1
          }
        }
        if (cnt > 1) {
          throw new Exception("This join is for the N-M case")
        }
      }
    }
    new Query(res.toList)
  }

  // Works only in the case of 1-N relation
  def mergeJoin[S <: Record](q2: Query[S])(ord: (T, S) => Int)(joinCond: (T, S) => Boolean): Query[DynamicCompositeRecord[T, S]] = {
    val res = ArrayBuffer[DynamicCompositeRecord[T, S]]()
    val leftArr = underlying.asInstanceOf[List[Record]].toArray.asInstanceOf[Array[T]]
    val leftSize = leftArr.length
    var leftIndex = 0
    def leftElem = leftArr(leftIndex)
    val rightArr = q2.getList.asInstanceOf[List[Record]].toArray.asInstanceOf[Array[S]]
    val rightSize = rightArr.length
    var rightIndex = 0
    def rightElem = rightArr(rightIndex)
    while (leftIndex < leftSize && rightIndex < rightSize) {
      val cmp = ord(leftElem, rightElem)
      if (cmp < 0) {
        leftIndex += 1
      } else if (cmp > 0) {
        rightIndex += 1
      } else {
        assert(joinCond(leftElem, rightElem))
        // println(s"here! $leftElem & $rightElem")
        res += leftElem.concatenateDynamic(rightElem)
        // // leftIndex += 1
        // // var hitNumber = 0
        rightIndex += 1
        // val le = leftElem
        // val re = rightElem
        // // leftIndex += 1
        // val leftBucket = ArrayBuffer[T]()
        // while (leftIndex < leftSize && joinCond(leftElem, re)) {
        //   leftBucket += leftElem
        //   leftIndex += 1
        //   // hitNumber += 1
        // }

        // // rightIndex += 1
        // val rightBucket = ArrayBuffer[S]()
        // while (rightIndex < rightSize && joinCond(le, rightElem)) {
        //   rightBucket += rightElem
        //   rightIndex += 1
        //   // hitNumber += 1
        // }
        // // assert(hitNumber == 2)
        // for (x1 <- leftBucket) {
        //   for (x2 <- rightBucket) {
        //     assert(joinCond(x1, x2))
        //     res += x1.concatenateDynamic(x2)
        //   }
        // }
      }
    }
    new Query(res.toList)
  }

  def leftHashSemiJoin[S <: Record, R](q2: Query[S])(leftHash: T => R)(rightHash: S => R)(joinCond: (T, S) => Boolean): Query[T] = {
    val res = ArrayBuffer[T]()
    val hm = MultiMap[R, S]
    for (elem <- q2.getList) {
      hm.addBinding(rightHash(elem), elem)
    }
    for (elem <- underlying) {
      val k = leftHash(elem)
      hm.get(k) foreach { tmpBuffer =>
        if (tmpBuffer.exists(bufElem => joinCond(elem, bufElem)))
          res += elem
      }
    }
    new Query(res.toList)
  }
}
*/
class GroupedQuery[K, V](private val underlying: Map[K, List[V]]) {
  def mapValues[S](f: Query[V] => S): Query[(K, S)] =
    new Query(underlying.mapValues(l => f(new Query(l))).toList)
}