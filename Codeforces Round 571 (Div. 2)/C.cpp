#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
//     Let's say that we want to know whether 𝑓(𝑐,𝑑)
//  is even for some strings 𝑐
//  and 𝑑
// .

// Let's define 𝑐𝑛𝑡𝑐
//  as number of ones in string 𝑐
//  and 𝑐𝑛𝑡𝑑
//  as number of ones in 𝑑
// .

// It's easy to see that 𝑓(𝑐,𝑑)
//  is even if and only if 𝑐𝑛𝑡𝑏
//  and 𝑐𝑛𝑡𝑐
//  have same parity. In other words if 𝑐𝑛𝑡𝑐≡𝑐𝑛𝑡𝑑(mod2)
//  then 𝑓(𝑐,𝑑)
//  is even.

// So, we can check if two strings have even number of distinct bits in 𝑂(1)
//  if know how many ones does each of them contain.

// Using that fact we can easily solve problem in 𝑂(𝑛)
//  by using prefix sums.

    /*
    C. Vus the Cossack and Strings
time limit per test1 second
memory limit per test256 megabytes
Vus the Cossack has two binary strings, that is, strings that consist only of "0" and "1". We call these strings 𝑎
 and 𝑏
. It is known that |𝑏|≤|𝑎|
, that is, the length of 𝑏
 is at most the length of 𝑎
.

The Cossack considers every substring of length |𝑏|
 in string 𝑎
. Let's call this substring 𝑐
. He matches the corresponding characters in 𝑏
 and 𝑐
, after which he counts the number of positions where the two strings are different. We call this function 𝑓(𝑏,𝑐)
.

For example, let 𝑏=00110
, and 𝑐=11000
. In these strings, the first, second, third and fourth positions are different.

Vus the Cossack counts the number of such substrings 𝑐
 such that 𝑓(𝑏,𝑐)
 is even.

For example, let 𝑎=01100010
 and 𝑏=00110
. 𝑎
 has four substrings of the length |𝑏|
: 01100
, 11000
, 10001
, 00010
.

𝑓(00110,01100)=2
;
𝑓(00110,11000)=4
;
𝑓(00110,10001)=4
;
𝑓(00110,00010)=1
.
Since in three substrings, 𝑓(𝑏,𝑐)
 is even, the answer is 3
.

Vus can not find the answer for big strings. That is why he is asking you to help him.

Input
The first line contains a binary string 𝑎
 (1≤|𝑎|≤106
) — the first string.

The second line contains a binary string 𝑏
 (1≤|𝑏|≤|𝑎|
) — the second string.

Output
Print one number — the answer.

Examples
InputCopy
01100010
00110
OutputCopy
3
InputCopy
1010111110
0110
OutputCopy
4
Note
The first example is explained in the legend.

In the second example, there are five substrings that satisfy us: 1010
, 0101
, 1111
, 1111
.
    */
    string a,b;
    cin>>a>>b;
    int cnta=0,cntb=0;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]=='1')cnta++;
    }
    for(int i=0;i<b.size();++i)
    {
        if(b[i]=='1')cntb++;
    }
    if(cnta%2==cntb%2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    sol();
    return 0;
}