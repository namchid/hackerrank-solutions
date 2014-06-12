// 6.12.14
object Solution {

  def symmetric(pts: Array[Int]): Unit = {
    val (px, py, qx, qy) = (pts(0), pts(1), pts(2), pts(3))
    
    val dx = qx - px
    val dy = qy - py
    println((dx + qx) + " " + (dy + qy))
  }
  
  def main(args: Array[String]): Unit = {
    val n = readInt
    for(i <- 0 until n) {
      symmetric(readLine.split(" +").map(_.toInt))
    }
  }
}
