// 6.11.14
// TODO: Fix to not time out on #6

object Solution {

    //note: readLine is now deprecated (WTF, Odersky?)
	def appearsKTimes(arr: Array[Int], elem: Int, bar: Int, count: Int, index: Int): Boolean = {
		if(count == bar) return true
		if(index == arr.length) return false
		if(arr(index) == elem) {
			return appearsKTimes(arr, elem, bar, count + 1, index + 1)
		}
		return appearsKTimes(arr, elem, bar, count, index + 1)
	}

	def filterOut(arr: Array[Int], elem: Int): Array[Int] = {
		return arr.filter(x => x != elem)
	}

	def filterElems(arr: Array[Int], ret: Array[Int], bar: Int): Array[Int] = {
		if(arr.size == 0) return ret
		val elem = arr(0)
		val bool = appearsKTimes(arr, elem, bar, 0, 0)
		val arrPrime = filterOut(arr, elem)
		if(bool) return filterElems(arrPrime, ret ++ Array(elem), bar)
		else return filterElems(arrPrime, ret, bar)
	}

	def main(args: Array[String]): Unit = {
		val cases = readInt

		for(i <- 0 until cases) {
			val numElemsBar = readLine.split(" +").map(_.toInt)
			var bar = numElemsBar(1)
			val arr = readLine.split(" +").map(_.toInt)
			val answer = filterElems(arr, new Array[Int](0), bar)
			if(answer.length != 0) println(answer.mkString(" ")) else println(-1)
		}
	}
}