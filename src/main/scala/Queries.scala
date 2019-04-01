package dblab

/**
 *   In order to change from pull engine to push engine the next line should be commented and the line after
 *   should be uncommented.
 */
import TPCHLoader._
import GenericEngine._

object Queries {
  def Q1(numRuns: Int) {
    val lineitemTable = Query(loadLineitem())
    for (i <- 0 until numRuns) {
      runQuery {
        val constantDate: Int = parseDate("1998-09-02")
        val result = lineitemTable.filter(_.L_SHIPDATE <= constantDate).groupBy(x => new Q1GRPRecord(
          x.L_RETURNFLAG, x.L_LINESTATUS)).mapValues(l =>
          Array(
            l.map(_.L_DISCOUNT).sum,
            l.map(_.L_QUANTITY).sum,
            l.map(_.L_EXTENDEDPRICE).sum,
            l.map(t => t.L_EXTENDEDPRICE * (1.0 - t.L_DISCOUNT)).sum,
            l.map(t => t.L_EXTENDEDPRICE * (1.0 - t.L_DISCOUNT) * (1.0 + t.L_TAX)).sum,
            l.count,
            l.map(_.L_QUANTITY).avg,
            l.map(_.L_EXTENDEDPRICE).avg,
            l.map(_.L_DISCOUNT).avg))
          .sortBy(t =>
            t._1.L_RETURNFLAG.toInt * 128 + t._1.L_LINESTATUS.toInt)
        result.printRows(kv => {
          printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n",
            kv._1.L_RETURNFLAG, kv._1.L_LINESTATUS, kv._2.apply(1), kv._2.apply(2), kv._2.apply(3), kv._2.apply(4),
            kv._2.apply(6), kv._2.apply(7), kv._2.apply(8), kv._2.apply(5))
        }, -1)
      }
    }
  }

  def Q1_dr(numRuns: Int) {
    val lineitemTable = Query(loadLineitemDD())
    for (i <- 0 until numRuns) {
      runQuery {
        val constantDate: Int = parseDate("1998-09-02")
        val result = lineitemTable.filter(_.L_SHIPDATE[Int] <= constantDate).groupBy(x => new Q1GRPRecord(
          x.L_RETURNFLAG, x.L_LINESTATUS)).mapValues(l =>
          Array(
            l.map(_.L_DISCOUNT[Double]).sum,
            l.map(_.L_QUANTITY[Double]).sum,
            l.map(_.L_EXTENDEDPRICE[Double]).sum,
            l.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double])).sum,
            l.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]) * (1.0 + t.L_TAX[Double])).sum,
            l.count,
            l.map(_.L_QUANTITY[Double]).avg,
            l.map(_.L_EXTENDEDPRICE[Double]).avg,
            l.map(_.L_DISCOUNT[Double]).avg))
          .sortBy(t =>
            t._1.L_RETURNFLAG.toInt * 128 + t._1.L_LINESTATUS.toInt)
        result.printRows(kv => {
          printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n",
            kv._1.L_RETURNFLAG, kv._1.L_LINESTATUS, kv._2.apply(1), kv._2.apply(2), kv._2.apply(3), kv._2.apply(4),
            kv._2.apply(6), kv._2.apply(7), kv._2.apply(8), kv._2.apply(5))
        }, -1)
      }
    }
  }

  def Q1_pr(numRuns: Int) {
    val lineitemTable = Query(loadLineitemPR())
    for (i <- 0 until numRuns) {
      runQuery {
        val constantDate: Int = parseDate("1998-09-02")
        val result = lineitemTable.filter(_.L_SHIPDATE[Int] <= constantDate).groupBy(x => new Q1GRPRecord(
          x.L_RETURNFLAG, x.L_LINESTATUS)).mapValues(l =>
          Array(
            l.map(_.L_DISCOUNT[Double]).sum,
            l.map(_.L_QUANTITY[Double]).sum,
            l.map(_.L_EXTENDEDPRICE[Double]).sum,
            l.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double])).sum,
            l.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]) * (1.0 + t.L_TAX[Double])).sum,
            l.count,
            l.map(_.L_QUANTITY[Double]).avg,
            l.map(_.L_EXTENDEDPRICE[Double]).avg,
            l.map(_.L_DISCOUNT[Double]).avg))
          .sortBy(t =>
            t._1.L_RETURNFLAG.toInt * 128 + t._1.L_LINESTATUS.toInt)
        result.printRows(kv => {
          printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n",
            kv._1.L_RETURNFLAG, kv._1.L_LINESTATUS, kv._2.apply(1), kv._2.apply(2), kv._2.apply(3), kv._2.apply(4),
            kv._2.apply(6), kv._2.apply(7), kv._2.apply(8), kv._2.apply(5))
        }, -1)
      }
    }
  }

  def Q1_st(numRuns: Int) {
    val lineitemTable = Query(loadLineitemST())
    for (i <- 0 until numRuns) {
      runQuery {
        val constantDate: Int = parseDate("1998-09-02")
        val result = lineitemTable.filter(_.L_SHIPDATE <= constantDate).groupBy(x => new Q1GRPRecord(
          x.L_RETURNFLAG, x.L_LINESTATUS)).mapValues(l =>
          Array(
            l.map(_.L_DISCOUNT).sum,
            l.map(_.L_QUANTITY).sum,
            l.map(_.L_EXTENDEDPRICE).sum,
            l.map(t => t.L_EXTENDEDPRICE * (1.0 - t.L_DISCOUNT)).sum,
            l.map(t => t.L_EXTENDEDPRICE * (1.0 - t.L_DISCOUNT) * (1.0 + t.L_TAX)).sum,
            l.count,
            l.map(_.L_QUANTITY).avg,
            l.map(_.L_EXTENDEDPRICE).avg,
            l.map(_.L_DISCOUNT).avg))
          .sortBy(t =>
            t._1.L_RETURNFLAG.toInt * 128 + t._1.L_LINESTATUS.toInt)
        result.printRows(kv => {
          printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n",
            kv._1.L_RETURNFLAG, kv._1.L_LINESTATUS, kv._2.apply(1), kv._2.apply(2), kv._2.apply(3), kv._2.apply(4),
            kv._2.apply(6), kv._2.apply(7), kv._2.apply(8), kv._2.apply(5))
        }, -1)
      }
    }
  }

  // def Q2(numRuns: Int) {
  //   val partTable = loadPart()
  //   val partsuppTable = loadPartsupp()
  //   val nationTable = loadNation()
  //   val regionTable = loadRegion()
  //   val supplierTable = loadSupplier()
  //   for (i <- 0 until numRuns) {
  //     runQuery {
  //       val africa = parseString("AFRICA")
  //       val tin = parseString("TIN")
  //       val jo1 = Query(supplierTable).hashJoin(Query(partsuppTable))(x => x.S_SUPPKEY)(x => x.PS_SUPPKEY)((x, y) => x.S_SUPPKEY == y.PS_SUPPKEY)
  //       val jo2 = Query(nationTable).hashJoin(jo1)(x => x.N_NATIONKEY)(x => x.S_NATIONKEY[Int])((x, y) => x.N_NATIONKEY == y.S_NATIONKEY[Int])
  //       val partScan = Query(partTable).filter(x => x.P_SIZE == 43 && x.P_TYPE.endsWith(tin))
  //       val jo3 = partScan.hashJoin(jo2)(x => x.P_PARTKEY)(x => x.PS_PARTKEY[Int])((x, y) => x.P_PARTKEY == y.PS_PARTKEY[Int])
  //       val regionScan = Query(regionTable).filter(_.R_NAME === africa)
  //       val jo4 = regionScan.hashJoin(jo3)(x => x.R_REGIONKEY)(x => x.N_REGIONKEY[Int])((x, y) => x.R_REGIONKEY == y.N_REGIONKEY[Int])
  //       val wo = jo4.groupBy(x => x.P_PARTKEY[Int]).mapValues(x => x.minBy(y => y.PS_SUPPLYCOST[Double]))
  //       val so = wo.sortBy(x => (-x._2.S_ACCTBAL[Double], x._2.N_NAME[OptimalString].string, x._2.S_NAME[OptimalString].string, x._2.P_PARTKEY[Int]))
  //       so.take(100).printRows(e => {
  //         val kv = e._2
  //         printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", kv.S_ACCTBAL[Double], (kv.S_NAME[OptimalString]).string, (kv.N_NAME[OptimalString]).string, kv.P_PARTKEY[Int], (kv.P_MFGR[OptimalString]).string, (kv.S_ADDRESS[OptimalString]).string, (kv.S_PHONE[OptimalString]).string, (kv.S_COMMENT[OptimalString]).string)
  //       }, -1)
  //       ()
  //     }
  //   }
  // }

  // def Q3(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val ordersTable = loadOrders()
  //   val customerTable = loadCustomer()
  //   for (i <- 0 until numRuns) {
  //     runQuery {
  //       val constantDate = parseDate("1995-03-04")
  //       val houseHold = parseString("HOUSEHOLD")
  //       val scanCustomer = Query(customerTable).filter(x => x.C_MKTSEGMENT === houseHold)
  //       val scanOrders = Query(ordersTable).filter(x => x.O_ORDERDATE < constantDate)
  //       val scanLineitem = Query(lineitemTable).filter(x => x.L_SHIPDATE > constantDate)
  //       val jo1 = scanCustomer.hashJoin(scanOrders)(x => x.C_CUSTKEY)(x => x.O_CUSTKEY)((x, y) => x.C_CUSTKEY == y.O_CUSTKEY)
  //       val jo2 = jo1.hashJoin(scanLineitem)(x => x.O_ORDERKEY[Int])(x => x.L_ORDERKEY)((x, y) => x.O_ORDERKEY[Int] == y.L_ORDERKEY)
  //       val aggOp = jo2.groupBy(x => new Q3GRPRecord(x.L_ORDERKEY[Int], x.O_ORDERDATE[Int], x.O_SHIPPRIORITY[Int])).mapValues(_.map(t => (t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]))).sum)
  //       val sortOp = aggOp.sortBy(x => (-x._2, x._1.O_ORDERDATE))
  //       var rows = 0
  //       sortOp.take(10).printRows(e =>
  //         printf("%d|%.4f|%s|%d\n", e._1.L_ORDERKEY, e._2, dateToString(e._1.O_ORDERDATE), e._1.O_SHIPPRIORITY), -1)
  //     }
  //   }
  // }

  // def Q4(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val ordersTable = loadOrders()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val constantDate1: Int = parseDate("1993-11-01")
  //       val constantDate2: Int = parseDate("1993-08-01")
  //       val scanOrders = Query(ordersTable).filter(x => x.O_ORDERDATE < constantDate1 && x.O_ORDERDATE >= constantDate2)
  //       val scanLineitem = Query(lineitemTable).filter(x => x.L_COMMITDATE < x.L_RECEIPTDATE)
  //       val hj = scanOrders.leftHashSemiJoin(scanLineitem)(x => x.O_ORDERKEY)(x => x.L_ORDERKEY)((x, y) => x.O_ORDERKEY == y.L_ORDERKEY)
  //       val aggRes = hj.groupBy(x => x.O_ORDERPRIORITY).mapValues(_.count)
  //       val sortOp = aggRes.sortBy(_._1.string)
  //       sortOp.printRows(kv =>
  //         printf("%s|%d\n", kv._1.string, kv._2), -1)
  //     })
  //   }
  // }

  // def Q5(numRuns: Int) {
  //   val nationTable = loadNation()
  //   val regionTable = loadRegion()
  //   val supplierTable = loadSupplier()
  //   val lineitemTable = loadLineitem()
  //   val ordersTable = loadOrders()
  //   val customerTable = loadCustomer()

  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val constantDate1 = parseDate("1996-01-01")
  //       val constantDate2 = parseDate("1997-01-01")
  //       val asia = parseString("ASIA")
  //       val scanRegion =
  //         Query(regionTable).filter(x => x.R_NAME === asia)
  //       val scanNation =
  //         Query(nationTable)
  //       val scanLineitem =
  //         Query(lineitemTable)
  //       val scanOrders =
  //         Query(ordersTable).filter(x => x.O_ORDERDATE >= constantDate1 && x.O_ORDERDATE < constantDate2)
  //       val scanCustomer =
  //         Query(customerTable)
  //       val scanSupplier =
  //         Query(supplierTable)
  //       val jo1 =
  //         scanRegion.hashJoin(scanNation)(x => x.R_REGIONKEY)(x => x.N_REGIONKEY)((x, y) => x.R_REGIONKEY == y.N_REGIONKEY)
  //       val jo2 =
  //         jo1.hashJoin(scanCustomer)(x => x.N_NATIONKEY[Int])(x => x.C_NATIONKEY)((x, y) => x.N_NATIONKEY[Int] == y.C_NATIONKEY)
  //       val jo3 =
  //         jo2.hashJoin(scanOrders)(x => x.C_CUSTKEY[Int])(x => x.O_CUSTKEY)((x, y) => x.C_CUSTKEY[Int] == y.O_CUSTKEY)
  //       val jo4 =
  //         jo3.hashJoin(scanLineitem)(x => x.O_ORDERKEY[Int])(x => x.L_ORDERKEY)((x, y) => x.O_ORDERKEY[Int] == y.L_ORDERKEY)
  //       val jo5 =
  //         scanSupplier.hashJoin(jo4)(x => x.S_SUPPKEY)(x => x.L_SUPPKEY[Int])((x, y) => x.S_SUPPKEY == y.L_SUPPKEY[Int] && y.N_NATIONKEY[Int] == x.S_NATIONKEY)

  //       val aggOp = jo5.groupBy(x => x.N_NAME[OptimalString]).mapValues(list => list.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double])).sum)
  //       val sortOp = aggOp.sortBy(x => -x._2)
  //       sortOp.printRows(kv =>
  //         printf("%s|%.4f\n", kv._1.string, kv._2), -1)
  //       ()
  //     })
  //   }
  // }

  // def Q6(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   for (i <- 0 until numRuns) {
  //     runQuery {
  //       val constantDate1: Int = parseDate("1996-01-01")
  //       val constantDate2: Int = parseDate("1997-01-01")
  //       val result = Query(lineitemTable).filter(x => x.L_SHIPDATE >= constantDate1 && (x.L_SHIPDATE < constantDate2 && (x.L_DISCOUNT >= 0.08 && (x.L_DISCOUNT <= 0.1 && (x.L_QUANTITY < 24)))))
  //         .map(t => t.L_EXTENDEDPRICE * t.L_DISCOUNT).sum
  //       printf("%.4f\n", result)
  //       printf("(%d rows)\n", 1)
  //     }
  //   }
  // }

  // def Q9(numRuns: Int) {
  //   val partTable = loadPart()
  //   val nationTable = loadNation()
  //   val ordersTable = loadOrders()
  //   val partsuppTable = loadPartsupp()
  //   val supplierTable = loadSupplier()
  //   val lineitemTable = loadLineitem()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val ghost = parseString("ghost")
  //       val soNation = Query(nationTable)
  //       val soSupplier = Query(supplierTable)
  //       val soLineitem = Query(lineitemTable)
  //       val soPart = Query(partTable).filter(x => x.P_NAME.containsSlice(ghost))
  //       val soPartsupp = Query(partsuppTable)
  //       val soOrders = Query(ordersTable)
  //       val hj1 = soPart.hashJoin(soLineitem)(x => x.P_PARTKEY)(x => x.L_PARTKEY)((x, y) => x.P_PARTKEY == y.L_PARTKEY)
  //       val hj2 = soSupplier.hashJoin(hj1)(x => x.S_SUPPKEY)(x => x.L_SUPPKEY[Int])((x, y) => x.S_SUPPKEY == y.L_SUPPKEY[Int])
  //       val hj3 = soNation.hashJoin(hj2)(x => x.N_NATIONKEY)(x => x.S_NATIONKEY[Int])((x, y) => x.N_NATIONKEY == y.S_NATIONKEY[Int])
  //       val hj4 = soPartsupp.hashJoin(hj3)(x => x.PS_PARTKEY)(x => x.L_PARTKEY[Int])((x, y) => x.PS_PARTKEY == y.L_PARTKEY[Int] && x.PS_SUPPKEY == y.L_SUPPKEY[Int])
  //       val hj5 = soOrders.hashJoin(hj4)(x => x.O_ORDERKEY)(x => x.L_ORDERKEY[Int])((x, y) => x.O_ORDERKEY == y.L_ORDERKEY[Int])
  //       val aggOp = hj5.groupBy(x => new Q9GRPRecord(x.N_NAME[OptimalString], dateToYear(x.O_ORDERDATE[Int]))).mapValues(_.map(t =>
  //         ((t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]))) - ((1.0 * t.PS_SUPPLYCOST[Double]) * t.L_QUANTITY[Double])).sum)
  //       val sortOp = aggOp.sortBy(x => (x._1.NATION.string, -x._1.O_YEAR))
  //       sortOp.printRows(kv => printf("%s|%d|%.4f\n", kv._1.NATION.string, kv._1.O_YEAR, kv._2), -1)
  //     })
  //   }
  // }

  // def Q10(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val nationTable = loadNation()
  //   val customerTable = loadCustomer()
  //   val ordersTable = loadOrders()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val constantDate1 = parseDate("1994-11-01")
  //       val constantDate2 = parseDate("1995-02-01")
  //       val so1 = Query(ordersTable).filter(x => x.O_ORDERDATE >= constantDate1 && x.O_ORDERDATE < constantDate2)
  //       val so2 = Query(customerTable)
  //       val so3 = Query(nationTable)
  //       val so4 = Query(lineitemTable).filter(x => x.L_RETURNFLAG == 'R')
  //       val hj1 = so1.hashJoin(so4)(x => x.O_ORDERKEY)(x => x.L_ORDERKEY)((x, y) => x.O_ORDERKEY == y.L_ORDERKEY)
  //       val hj2 = so2.hashJoin(hj1)(x => x.C_CUSTKEY)(x => x.O_CUSTKEY[Int])((x, y) => x.C_CUSTKEY == y.O_CUSTKEY[Int])
  //       val hj3 = so3.hashJoin(hj2)(x => x.N_NATIONKEY)(x => x.C_NATIONKEY[Int])((x, y) => x.N_NATIONKEY == y.C_NATIONKEY[Int])
  //       val aggOp = hj3.groupBy(x => new Q10GRPRecord(x.C_CUSTKEY[Int],
  //         x.C_NAME[OptimalString], x.C_ACCTBAL[Double],
  //         x.C_PHONE[OptimalString], x.N_NAME[OptimalString],
  //         x.C_ADDRESS[OptimalString], x.C_COMMENT[OptimalString])).mapValues(list => list.map(t => t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double])).sum)
  //       val sortOp = aggOp.sortBy(-_._2)
  //       sortOp.take(20).printRows(kv => {
  //         printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", kv._1.C_CUSTKEY, kv._1.C_NAME.string, kv._2,
  //           kv._1.C_ACCTBAL, kv._1.N_NAME.string, kv._1.C_ADDRESS.string, kv._1.C_PHONE.string,
  //           kv._1.C_COMMENT.string)
  //       }, -1)
  //       ()
  //     })
  //   }
  // }

  // def Q11(numRuns: Int) {
  //   val partsuppTable = loadPartsupp()
  //   val supplierTable = loadSupplier()
  //   val nationTable = loadNation()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val uk = parseString("UNITED KINGDOM")
  //       val scanSupplier = Query(supplierTable)
  //       val scanNation = Query(nationTable).filter(x => x.N_NAME === uk)
  //       val jo1 = scanNation.hashJoin(scanSupplier)(x => x.N_NATIONKEY)(x => x.S_NATIONKEY)((x, y) => x.N_NATIONKEY == y.S_NATIONKEY)
  //       val scanPartsupp = Query(partsuppTable)
  //       val jo2 = jo1.hashJoin(scanPartsupp)(x => x.S_SUPPKEY[Int])(x => x.PS_SUPPKEY)((x, y) => x.S_SUPPKEY[Int] == y.PS_SUPPKEY)
  //       val wo = jo2.groupBy(x => x.PS_PARTKEY[Int]).mapValues(list => list.map(e => (e.PS_SUPPLYCOST[Double] * e.PS_AVAILQTY[Int])).sum)
  //         .materialize
  //       val total = wo.map(_._2).sum
  //       val so = wo.filter(_._2 > total * 0.0001)
  //       val sortOp = so.sortBy(-_._2)
  //       sortOp.printRows(kv => printf("%d|%.2f\n", kv._1, kv._2), -1)
  //     })
  //   }
  // }

  // def Q12(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val ordersTable = loadOrders()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val mail = parseString("MAIL")
  //       val ship = parseString("SHIP")
  //       val constantDate = parseDate("1995-01-01")
  //       val constantDate2 = parseDate("1994-01-01")
  //       val so2 = Query(lineitemTable).filter(x =>
  //         x.L_RECEIPTDATE < constantDate && x.L_COMMITDATE < constantDate && x.L_SHIPDATE < constantDate && x.L_SHIPDATE < x.L_COMMITDATE && x.L_COMMITDATE < x.L_RECEIPTDATE && x.L_RECEIPTDATE >= constantDate2 && (x.L_SHIPMODE === mail || x.L_SHIPMODE === ship))
  //       val jo = Query(ordersTable).hashJoin(so2)(x => x.O_ORDERKEY)(x => x.L_ORDERKEY)((x, y) => x.O_ORDERKEY == y.L_ORDERKEY)
  //       val URGENT = parseString("1-URGENT")
  //       val HIGH = parseString("2-HIGH")
  //       val aggOp = jo.groupBy(x => x.L_SHIPMODE[OptimalString]).mapValues(list => {
  //         Array(list.filter(t => t.O_ORDERPRIORITY[OptimalString] === URGENT || t.O_ORDERPRIORITY[OptimalString] === HIGH).count,
  //           list.filter(t => t.O_ORDERPRIORITY[OptimalString] =!= URGENT && t.O_ORDERPRIORITY[OptimalString] =!= HIGH).count)
  //         // var x0 = 0
  //         // var x1 = 0
  //         // list.foreach { t =>
  //         //   if (t.O_ORDERPRIORITY[OptimalString] === URGENT || t.O_ORDERPRIORITY[OptimalString] === HIGH)
  //         //     x0 += 1
  //         //   if (t.O_ORDERPRIORITY[OptimalString] =!= URGENT && t.O_ORDERPRIORITY[OptimalString] =!= HIGH)
  //         //     x1 += 1
  //         // }
  //         // Array(x0, x1)
  //       })
  //       val sortOp = aggOp.sortBy(_._1.string)
  //       sortOp.printRows(kv =>
  //         printf("%s|%d|%d\n", kv._1.string, kv._2(0), kv._2(1)), -1)
  //     })
  //   }
  // }

  // def Q14(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val partTable = loadPart()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val promo = parseString("PROMO")
  //       val constantDate = parseDate("1994-04-01")
  //       val constantDate2 = parseDate("1994-03-01")
  //       val joinResult = Query(partTable)
  //         .hashJoin(Query(lineitemTable)
  //           .filter(x => x.L_SHIPDATE >= constantDate2 && x.L_SHIPDATE < constantDate))(_.P_PARTKEY)(_.L_PARTKEY)((x, y) => x.P_PARTKEY == y.L_PARTKEY)
  //       // val agg1 = joinResult.filter(_.P_TYPE[OptimalString].startsWith(promo)).map(t => (t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]))).sum
  //       // val agg2 = joinResult.map(t => (t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]))).sum
  //       var agg1 = 0.0
  //       var agg2 = 0.0
  //       joinResult.foreach { t =>
  //         val e = t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double])
  //         val x = if (t.P_TYPE[OptimalString].startsWith(promo)) e else 0.0
  //         agg1 += x
  //         agg2 += e
  //       }
  //       val result = agg1 * 100 / agg2
  //       printf("%.4f\n", result)
  //       printf("(%d rows)\n", 1)
  //       ()
  //     })
  //   }
  // }

  // def Q18(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val ordersTable = loadOrders()
  //   val customerTable = loadCustomer()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       // Group aggregation on Lineitem
  //       val aggOp1 = Query(lineitemTable).groupBy(_.L_ORDERKEY).mapValues(_.map(_.L_QUANTITY).sum).filter(_._2 > 300)
  //         .map(x => DynamicDataRow("AggRec")(("key", x._1), ("agg", x._2)))
  //       // Hash Join with orders
  //       val jo1 = aggOp1.hashJoin(Query(ordersTable))(_.key[Int])(_.O_ORDERKEY)(_.key[Int] == _.O_ORDERKEY)
  //       val jo2 = jo1.hashJoin(Query(customerTable))(_.O_CUSTKEY[Int])(_.C_CUSTKEY)(_.O_CUSTKEY[Int] == _.C_CUSTKEY)
  //       val aggOp2 = jo2.groupBy(x => new Q18GRPRecord(x.C_NAME[OptimalString], x.C_CUSTKEY[Int], x.O_ORDERKEY[Int], x.O_ORDERDATE[Int], x.O_TOTALPRICE[Double]))
  //         .mapValues(_.map(_.agg[Double]).sum)
  //       val sortOp = aggOp2.sortBy(t => (-t._1.O_TOTALPRICE, t._1.O_ORDERDATE))
  //       sortOp.printRows(kv =>
  //         printf("%s|%d|%d|%s|%.2f|%.2f\n", kv._1.C_NAME.string, kv._1.C_CUSTKEY, kv._1.O_ORDERKEY, dateToString(kv._1.O_ORDERDATE), kv._1.O_TOTALPRICE, kv._2), 100)
  //       ()
  //     })
  //   }
  // }

  // def Q19(numRuns: Int) {
  //   val lineitemTable = loadLineitem()
  //   val partTable = loadPart()
  //   for (i <- 0 until numRuns) {
  //     runQuery({
  //       val Brand31 = parseString("Brand#31")
  //       val Brand43 = parseString("Brand#43")
  //       val SMBOX = parseString("SM BOX")
  //       val SMCASE = parseString("SM CASE")
  //       val SMPACK = parseString("SM PACK")
  //       val SMPKG = parseString("SM PKG")
  //       val MEDBAG = parseString("MED BAG")
  //       val MEDBOX = parseString("MED BOX")
  //       val MEDPACK = parseString("MED PACK")
  //       val MEDPKG = parseString("MED PKG")
  //       val LGBOX = parseString("LG BOX")
  //       val LGCASE = parseString("LG CASE")
  //       val LGPACK = parseString("LG PACK")
  //       val LGPKG = parseString("LG PKG")
  //       val DELIVERINPERSON = parseString("DELIVER IN PERSON")
  //       val AIR = parseString("AIR")
  //       val AIRREG = parseString("AIRREG")

  //       val so1 = Query(partTable).filter(x => x.P_SIZE >= 1 &&
  //         (x.P_SIZE <= 5 && x.P_BRAND === Brand31 && (x.P_CONTAINER === SMBOX || x.P_CONTAINER === SMCASE ||
  //           x.P_CONTAINER === SMPACK || x.P_CONTAINER === SMPKG)) ||
  //           (x.P_SIZE <= 10 && x.P_BRAND === Brand43 && (x.P_CONTAINER === MEDBAG || x.P_CONTAINER === MEDBOX ||
  //             x.P_CONTAINER === MEDPACK || x.P_CONTAINER === MEDPKG)) ||
  //             (x.P_SIZE <= 15 && x.P_BRAND === Brand43 && (x.P_CONTAINER === LGBOX || x.P_CONTAINER === LGCASE ||
  //               x.P_CONTAINER === LGPACK || x.P_CONTAINER === LGPKG)))
  //       val so2 = Query(lineitemTable).filter(x =>
  //         ((x.L_QUANTITY <= 36 && x.L_QUANTITY >= 26) || (x.L_QUANTITY <= 25 && x.L_QUANTITY >= 15) ||
  //           (x.L_QUANTITY <= 14 && x.L_QUANTITY >= 4)) && x.L_SHIPINSTRUCT === DELIVERINPERSON &&
  //           (x.L_SHIPMODE === AIR || x.L_SHIPMODE === AIRREG))
  //       val jo = so1.hashJoin(so2)(x => x.P_PARTKEY)(x => x.L_PARTKEY)((x, y) => x.P_PARTKEY == y.L_PARTKEY).filter(
  //         x => x.P_BRAND[OptimalString] === Brand31 &&
  //           (x.P_CONTAINER[OptimalString] === SMBOX || x.P_CONTAINER[OptimalString] === SMCASE || x.P_CONTAINER[OptimalString] === SMPACK || x.P_CONTAINER[OptimalString] === SMPKG) &&
  //           x.L_QUANTITY[Double] >= 4 && x.L_QUANTITY[Double] <= 14 && x.P_SIZE[Int] <= 5 || x.P_BRAND[OptimalString] === Brand43 &&
  //           (x.P_CONTAINER[OptimalString] === MEDBAG || x.P_CONTAINER[OptimalString] === MEDBOX || x.P_CONTAINER[OptimalString] === MEDPACK || x.P_CONTAINER[OptimalString] === MEDPKG) &&
  //           x.L_QUANTITY[Double] >= 15 && x.L_QUANTITY[Double] <= 25 && x.P_SIZE[Int] <= 10 || x.P_BRAND[OptimalString] === Brand43 &&
  //           (x.P_CONTAINER[OptimalString] === LGBOX || x.P_CONTAINER[OptimalString] === LGCASE || x.P_CONTAINER[OptimalString] === LGPACK || x.P_CONTAINER[OptimalString] === LGPKG) &&
  //           x.L_QUANTITY[Double] >= 26 && x.L_QUANTITY[Double] <= 36 && x.P_SIZE[Int] <= 15)
  //       val result = jo.map(t => (t.L_EXTENDEDPRICE[Double] * (1.0 - t.L_DISCOUNT[Double]))).sum
  //       printf("%.4f\n", result)
  //       printf("(%d rows)\n", 1)
  //     })
  //   }
  // }

  // def Q20(numRuns: Int) {
  //   val nationTable = loadNation()
  //   val supplierTable = loadSupplier()
  //   val partTable = loadPart()
  //   val partsuppTable = loadPartsupp()
  //   val lineitemTable = loadLineitem()
  //   for (i <- 0 until numRuns) {
  //     runQuery {
  //       val constantDate1 = parseDate("1996-01-01")
  //       val constantDate2 = parseDate("1997-01-01")
  //       val jordan = parseString("JORDAN")
  //       val azure = parseString("azure")
  //       val scanPart = Query(partTable).filter(x => x.P_NAME startsWith azure)
  //       val scanNation = Query(nationTable).filter(x => x.N_NAME === jordan)
  //       val scanLineitem = Query(lineitemTable).filter(x => x.L_SHIPDATE >= constantDate1 && x.L_SHIPDATE < constantDate2)
  //       val jo1 = scanPart.hashJoin(Query(partsuppTable))(x => x.P_PARTKEY)(x => x.PS_PARTKEY)((x, y) => x.P_PARTKEY == y.PS_PARTKEY)
  //       val jo2 = jo1.hashJoin(scanLineitem)(x => x.PS_PARTKEY[Int])(x => x.L_PARTKEY)((x, y) => x.PS_PARTKEY[Int] == y.L_PARTKEY && x.PS_SUPPKEY[Int] == y.L_SUPPKEY)
  //       val aggOp = jo2.groupBy(x => new Q20GRPRecord(x.PS_PARTKEY[Int], x.PS_SUPPKEY[Int], x.PS_AVAILQTY[Int])).mapValues(_.map(_.L_QUANTITY[Double]).sum)
  //       val selOp = aggOp.filter(x => x._1.PS_AVAILQTY > 0.5 * x._2).map(x => x._1)
  //       val jo3 = selOp.hashJoin(Query(supplierTable))(x => x.PS_SUPPKEY)(x => x.S_SUPPKEY)((x, y) => x.PS_SUPPKEY == y.S_SUPPKEY)
  //       val jo4 = scanNation.hashJoin(jo3)(x => x.N_NATIONKEY)(x => x.S_NATIONKEY[Int])((x, y) => x.N_NATIONKEY == y.S_NATIONKEY[Int])
  //       val sortOp = jo4.sortBy(_.S_NAME[OptimalString].string)
  //       sortOp.printRows(kv =>
  //         printf("%s|%s\n", kv.S_NAME[OptimalString].string, kv.S_ADDRESS[OptimalString].string), -1)
  //       ()
  //     }
  //   }
  // }
}
