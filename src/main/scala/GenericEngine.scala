package dblab

import java.util.{ Calendar, GregorianCalendar }

/**
 * A module which provides some core functionaly for query processing.
 */
object GenericEngine {
  def time[A](a: => A, msg: String) = {
    val start = System.nanoTime
    val result = a
    val end = (System.nanoTime - start) / (1000 * 1000)
    System.out.println(s"$msg completed in ${Console.BLUE}$end${Console.RESET} milliseconds")
    result
  }
  def runQuery[T](query: => T): T = {
    time(query, "Query")
  }

  def dateToString(long: Int): String = long.toString

  def dateToYear(long: Int): Int = {
    long / 10000
    //new java.util.Date(long).getYear + 1900
  }

  private val simpleDateFormatter = new java.text.SimpleDateFormat("yyyy-MM-dd")

  def parseDate(x: String): Int = {
    val d = simpleDateFormatter.parse(x)
    val calendar = new GregorianCalendar()
    calendar.setTime(d)
    val year = calendar.get(Calendar.YEAR)
    val month = calendar.get(Calendar.MONTH)
    val day = calendar.get(Calendar.DAY_OF_MONTH)
    (year * 10000) + ((month + 1) * 100) + day
  }
  def parseString(x: String): OptimalString = OptimalString(x.getBytes)
}
