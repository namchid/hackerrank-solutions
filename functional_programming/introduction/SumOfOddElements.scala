def f(arr:List[Int]) : Int = {
    val filt = arr.filter(x => (x % 2) != 0)
    val sum = filt.foldLeft(0)(_+_)
    return sum
}