#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    int mn=m;
    m=min(n,m);
    int ans=0;
    for(int i=0+n-m;i<n;++i)ans+=1ll*(mn-(n-i-1))*a[i];
    cout<<ans<<endl;
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