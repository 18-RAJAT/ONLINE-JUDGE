private fun readInt()=readln().toInt()
private fun readStrings()=readln().split(" ")
private fun readInts()=readStrings().map{it.toInt()}
fun solve()
{
    val n=readInts()
    val a=n[0]
    val b=n[1]
    val c=n[2]
    for(i in 1..a)print(i%10)
    for(i in 1..b)print(if(i%2==1)'A' else 'B')
    for(i in 1..c)print(if(i%2==1)'a' else 'b')
    println()
}

fun main()
{
    var t=readInt()
    while(t-->0)solve()
}