package dblab

/**
 * Represents a row in a database relation.
 */
class DataRow(val fieldMap: Map[String, Any]) {
  def numFields = fieldMap.size
  def getField(name: String): Option[Any] = fieldMap.get(name) match {
    case Some(fld) => Some(fld)
    case None =>
      var stop = false
      var res: Option[Any] = None
      for (f <- getNestedRecords() if !stop) {
        f.getField(name) match {
          case Some(r) => res = Some(r); stop = true;
          case None    =>
        }
      }
      res
  }
  def getFieldNames() = fieldMap.keySet
  def getNestedRecords(): Seq[DataRow] = fieldMap.map({ case (k, v) => v }).filter(_.isInstanceOf[DataRow]).toSeq.asInstanceOf[Seq[DataRow]]
  override def toString = "DataRow(" + fieldMap.toSeq.toString + ")"
  override def hashCode: Int = fieldMap.map(_._2.hashCode).sum
  override def equals(o: Any): Boolean = o match {
    case dr: DataRow => fieldMap.zip(dr.fieldMap).forall(x => x._1._1 == x._2._1 && x._1._2 == x._2._2)
    case _           => false
  }
}

import scala.language.dynamics

/**
 * Represents dynamic data rows, with the ability to access the attributes through field access.
 *
 * For example, instead of accessing an attribute using `row.getField("attr").get` it uses
 * `row.attr[Int]`.
 */
class DynamicDataRow(val className: String, override val fieldMap: Map[String, Any]) extends DataRow(fieldMap) with Dynamic {
  def selectDynamic[T](key: String): T = {
    getField(key).getOrElse(sys.error(s"$this does not have $key field")).asInstanceOf[T]
  }
}

/**
 * Factory module for the [[DynamicDataRow]] class.
 */
object DynamicDataRow {
  def apply(className: String)(values: (String, Any)*): DynamicDataRow =
    new DynamicDataRow(className, values.toMap)
}

case class Page(table: Table) {
  val fieldId = table.attributes.map(_.name).zipWithIndex.toMap
}

case class PageRow(page: Page, rowId: Int, values: Array[Any]) extends Dynamic {
  def numFields = page.fieldId.size
  def getField(name: String): Option[Any] = page.fieldId.get(name) match {
    case Some(id) => Some(values(id))
    case None     => throw new Exception(s"Table ${page.table.name} does not have any field named $name")
  }
  override def toString = "PageRow(" + values.toSeq.toString + ")"
  override def hashCode: Int = values.map(_.hashCode).sum
  override def equals(o: Any): Boolean = o match {
    case pr: PageRow => pr.page.table == page.table && values.zip(pr.values).forall(x => x._1 == x._2)
    case _           => false
  }
  def selectDynamic[T](key: String): T = {
    getField(key).getOrElse(sys.error(s"$this does not have $key field")).asInstanceOf[T]
  }
}
