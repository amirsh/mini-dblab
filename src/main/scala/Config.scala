package dblab

/**
 * A module containing configurations for running queries.
 */
object Config {
  /** Specifies if the correctness of the results should be checked or not. */
  var checkResults = true
  /** Specifies the location of data files. */
  var datapath: String = null
  /** Cache the loaded tables so that the same table is not loaded several times */
  val cacheLoading: Boolean = true
  /** Number of the repetitions of running a query */
  val numRuns: scala.Int = 1
  /** Specifies if the output should be printed or not */
  var printResult = false
  var profile: Boolean = false
}