package dblab

import Queries._

object Main {
    
  def main(args: Array[String]): Unit = {
    Config.datapath = args(0)
    Q18(1)
  }
}
