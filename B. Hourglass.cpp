#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int s,k,m;
    cin>>s>>k>>m;
    if(s<=k)
    {
        cout<<max(0LL,s-m%k)<<endl;
    }
    else
    {
        cout<<(m/k&1?max(0LL,k-m%k):max(0LL,s-m%k))<<endl;
    }
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