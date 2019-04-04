package dblab

import org.openjdk.jmh.annotations._
import java.util.concurrent.TimeUnit
import TPCHLoader._
import Queries._

@OutputTimeUnit(TimeUnit.MILLISECONDS)
@BenchmarkMode(Array(Mode.AverageTime))
@State(Scope.Thread)
@Fork(1)
class TPCHBenchmark {

  @Setup
  def prepare(): Unit = {
    Config.datapath = "data/sf0.1/"
    // loadLineitem()
  }

  @TearDown
  def clear(): Unit = {
    Loader.cachedTables.clear()
    println("TearDown!")
  }

  @Benchmark
  def q1(): Unit = {
    Q1(1)
  }

  // @Benchmark
  // def q1_dr(): Unit = {
  //   Q1_dr(1)
  // }

  @Benchmark
  def q1_st(): Unit = {
    Q1_st(1)
  }

  // @Benchmark
  // def q1_pr(): Unit = {
  //   Q1_pr(1)
  // }

  @Benchmark
  def q1_sr(): Unit = {
    Q1_pr(1)
  }

  @Benchmark
  def q3(): Unit = {
    Q3(1)
  }

  @Benchmark
  def q3_st(): Unit = {
    Q3_st(1)
  }

  @Benchmark
  def q3_sr(): Unit = {
    Q3_sr(1)
  }

  @Benchmark
  def q4(): Unit = {
    Q4(1)
  }

  @Benchmark
  def q4_st(): Unit = {
    Q4_st(1)
  }

  @Benchmark
  def q4_sr(): Unit = {
    Q4_sr(1)
  }

  @Benchmark
  def q6(): Unit = {
    Q6(1)
  }

  @Benchmark
  def q6_st(): Unit = {
    Q6_st(1)
  }

  @Benchmark
  def q6_sr(): Unit = {
    Q6_sr(1)
  }

  @Benchmark
  def q12(): Unit = {
    Q12(1)
  }

  @Benchmark
  def q12_st(): Unit = {
    Q12_st(1)
  }

  @Benchmark
  def q12_sr(): Unit = {
    Q12_sr(1)
  }

  @Benchmark
  def q18(): Unit = {
    Q18(1)
  }

  @Benchmark
  def q18_st(): Unit = {
    Q18_st(1)
  }

  @Benchmark
  def q18_sr(): Unit = {
    Q18_sr(1)
  }
}
