#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>a(n+1),ans(n+1);
    for(int i=1;i<=n;++i)a[i]=i;
    a[r]=a[l-1];
    for(int i=1;i<=n;++i)ans[i]=a[i]^a[i-1];
    for(int i=1;i<=n;++i)cout<<ans[i]<<" ";
    cout<<endl;
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