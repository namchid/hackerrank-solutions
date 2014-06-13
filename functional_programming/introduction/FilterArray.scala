def f(delim: Int, arr:List[Int]):List[Int] = {
    val ret = arr.filter(x => x < delim)
    return ret
}