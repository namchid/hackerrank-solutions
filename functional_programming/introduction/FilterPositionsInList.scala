def f(arr:List[Int]):List[Int] = {
    val x = arr.zipWithIndex
    val y = x.filter(_._2 % 2 != 0)
    val z = y.map(_._1)
        
    return z
}