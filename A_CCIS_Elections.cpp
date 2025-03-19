#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,a=0,b=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        x?a++:b++;
    }
    cout<<(a>b?"BOB":a<b?"ALICE":"TIE")<<endl;
}
signed main()
{
    sol();
    return 0;
}