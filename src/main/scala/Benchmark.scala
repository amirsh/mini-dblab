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
  def prepare() : Unit = {
    Config.datapath = "data/sf0.1/"
    loadLineitem()
  }

  @Benchmark
  def q1(): Unit = {
    Q1(1)
  }

  @Benchmark
  def q1_dr(): Unit = {
    Q1_dr(1)
  }
}
