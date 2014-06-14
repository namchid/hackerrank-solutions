// 6.13.14
// So although this is in the recursion section, the trick is no recursion.
object Solution {

	def split(str: String): Unit = {
		for(i <- 0 until str.length) {
			if(i % 2 == 0) {
				print(str(i+1))
			}
			else print(str(i-1))
		}
		println()
	}
	
	def main(args: Array[String]): Unit = {
		val t = readInt
		for(i <- 0 until t) {
			val str = readLine
			if(str.length < 2) println(str)
			else split(str)
		}
	} 
}