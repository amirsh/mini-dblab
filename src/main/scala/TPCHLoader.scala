package dblab

/**
 * A module that defines loaders for TPCH relations.
 */
object TPCHLoader {

  def tpchSchema: Schema = TPCHSchema.getSchema(Config.datapath, getScalingFactor)
  def getTable(tableName: String): Table = tpchSchema.tables.find(t => t.name == tableName).get
  def getScalingFactor: Double = Config.datapath.slice(Config.datapath.lastIndexOfSlice("sf") + 2, Config.datapath.length - 1).toDouble //TODO Pass SF to Config

  import Loader.loadTable

  def loadRegion() = loadTable[REGIONRecord](getTable("REGION"))

  def loadPartsupp() = loadTable[PARTSUPPRecord](getTable("PARTSUPP"))

  def loadPart() = loadTable[PARTRecord](getTable("PART"))

  def loadNation() = loadTable[NATIONRecord](getTable("NATION"))

  def loadSupplier() = loadTable[SUPPLIERRecord](getTable("SUPPLIER"))

  def loadLineitem() = loadTable[LINEITEMRecord](getTable("LINEITEM"))

  def loadOrders() = loadTable[ORDERSRecord](getTable("ORDERS"))

  def loadCustomer() = loadTable[CUSTOMERRecord](getTable("CUSTOMER"))
}

case class LINEITEMRecord(
  val L_ORDERKEY: Int,
  val L_PARTKEY: Int,
  val L_SUPPKEY: Int,
  val L_LINENUMBER: Int,
  val L_QUANTITY: Double,
  val L_EXTENDEDPRICE: Double,
  val L_DISCOUNT: Double,
  val L_TAX: Double,
  val L_RETURNFLAG: Char,
  val L_LINESTATUS: Char,
  val L_SHIPDATE: Int,
  val L_COMMITDATE: Int,
  val L_RECEIPTDATE: Int,
  val L_SHIPINSTRUCT: OptimalString,
  val L_SHIPMODE: OptimalString,
  val L_COMMENT: OptimalString) extends CaseClassRecord

case class ORDERSRecord(
  val O_ORDERKEY: Int,
  val O_CUSTKEY: Int,
  val O_ORDERSTATUS: Char,
  val O_TOTALPRICE: Double,
  val O_ORDERDATE: Int,
  val O_ORDERPRIORITY: OptimalString,
  val O_CLERK: OptimalString,
  val O_SHIPPRIORITY: Int,
  val O_COMMENT: OptimalString) extends CaseClassRecord

case class CUSTOMERRecord(
  val C_CUSTKEY: Int,
  val C_NAME: OptimalString,
  val C_ADDRESS: OptimalString,
  val C_NATIONKEY: Int,
  val C_PHONE: OptimalString,
  val C_ACCTBAL: Double,
  val C_MKTSEGMENT: OptimalString,
  val C_COMMENT: OptimalString) extends CaseClassRecord

case class SUPPLIERRecord(
  val S_SUPPKEY: Int,
  val S_NAME: OptimalString,
  val S_ADDRESS: OptimalString,
  val S_NATIONKEY: Int,
  val S_PHONE: OptimalString,
  val S_ACCTBAL: Double,
  val S_COMMENT: OptimalString) extends CaseClassRecord

case class PARTSUPPRecord(
  val PS_PARTKEY: Int,
  val PS_SUPPKEY: Int,
  val PS_AVAILQTY: Int,
  val PS_SUPPLYCOST: Double,
  val PS_COMMENT: OptimalString) extends CaseClassRecord

case class REGIONRecord(
  val R_REGIONKEY: Int,
  val R_NAME: OptimalString,
  val R_COMMENT: OptimalString) extends CaseClassRecord

case class NATIONRecord(
  val N_NATIONKEY: Int,
  val N_NAME: OptimalString,
  val N_REGIONKEY: Int,
  val N_COMMENT: OptimalString) extends CaseClassRecord

case class PARTRecord(
  val P_PARTKEY: Int,
  val P_NAME: OptimalString,
  val P_MFGR: OptimalString,
  val P_BRAND: OptimalString,
  val P_TYPE: OptimalString,
  val P_SIZE: Int,
  val P_CONTAINER: OptimalString,
  val P_RETAILPRICE: Double,
  val P_COMMENT: OptimalString) extends CaseClassRecord

case class Q1GRPRecord(
  val L_RETURNFLAG: Char,
  val L_LINESTATUS: Char) extends CaseClassRecord

case class Q3GRPRecord(
  val L_ORDERKEY: Int,
  val O_ORDERDATE: Int,
  val O_SHIPPRIORITY: Int) extends CaseClassRecord


case class Q9GRPRecord(
  val NATION: OptimalString,
  val O_YEAR: Int) extends CaseClassRecord

case class Q10GRPRecord(
  val C_CUSTKEY: Int,
  val C_NAME: OptimalString,
  val C_ACCTBAL: Double,
  val C_PHONE: OptimalString,
  val N_NAME: OptimalString,
  val C_ADDRESS: OptimalString,
  val C_COMMENT: OptimalString) extends CaseClassRecord

case class Q16GRPRecord1(
  val P_BRAND: OptimalString,
  val P_TYPE: OptimalString,
  val P_SIZE: Int,
  val PS_SUPPKEY: Int) extends CaseClassRecord

case class Q18GRPRecord(
  val C_NAME: OptimalString,
  val C_CUSTKEY: Int,
  val O_ORDERKEY: Int,
  val O_ORDERDATE: Int,
  val O_TOTALPRICE: Double) extends CaseClassRecord

case class Q20GRPRecord(
  val PS_PARTKEY: Int,
  val PS_SUPPKEY: Int,
  val PS_AVAILQTY: Int) extends CaseClassRecord
