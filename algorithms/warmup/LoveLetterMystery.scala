// 6.12.14
object Solution {
	
	def countChanges(str: String, begin: Int, end: Int): Int = {
		if(end < begin) return 0

		val charOne = str.charAt(begin)
		val charTwo = str.charAt(end)
		return math.abs(charOne - charTwo) + countChanges(str, begin + 1, end - 1)
	}

	def main(args: Array[String]): Unit = {
		val n = readInt

		for(i <- 0 until n) {
			val input = readLine
			println(countChanges(input, 0, input.length() - 1))
		}
	}

}