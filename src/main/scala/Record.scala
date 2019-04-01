package dblab

import scala.language.dynamics

trait Record {
  def getField(key: String): Option[Any]
}

trait CaseClassRecord extends Record {
  def getField(key: String): Option[Any] = {
    try {
      val field = this.getClass.getDeclaredField(key)
      field.setAccessible(true)
      Some(field.get(this))
    } catch {
      case noSuchField: java.lang.NoSuchFieldException => None
    }
  }
}

class DynamicCompositeRecord[T1 <: Record, T2 <: Record](val leftRecord: T1, val rightRecord: T2, leftAlias: String, rightAlias: String) extends Record with Dynamic {
  val l: T1 = leftRecord
  val r: T2 = rightRecord

  def selectDynamic[T](key: String): T = {
    findField(key).asInstanceOf[T]
  }

  def getField(key: String): Option[Any] = {
    val lk = if (key.startsWith(leftAlias)) leftRecord getField key.substring(leftAlias.size) else None
    val rk = if (key.startsWith(rightAlias)) rightRecord getField key.substring(rightAlias.size) else None
    lk map (Some.apply _) getOrElse rk
  }

  private def findField(key: String): Any = {
    getField(key).getOrElse(sys.error(s"$this does not have $key field"))
  }

  override def toString = s"DynamicCompositeRecord($leftRecord, $rightRecord, $leftAlias, $rightAlias)"
}

