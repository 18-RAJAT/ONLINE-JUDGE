#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int res=(n&1?n-1:n);
    cout<<res;
    for(int i=2;i<=n-1;++i)cout<<" "<<(i^1);cout<<" "<<1<<endl;
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