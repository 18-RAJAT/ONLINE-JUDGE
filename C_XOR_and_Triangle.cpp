#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x;
    cin>>x;
    int bit=63-__builtin_clzll(x),p=(1LL<<bit);
    cout<<(p==x || p*2==x+1?-1:p-1)<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}