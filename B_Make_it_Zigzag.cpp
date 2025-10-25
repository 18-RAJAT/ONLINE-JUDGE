#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0,mx=0;
    for(int i=0;i<n;++i)
    {
        mx=max(mx,a[i]);
        if(i&1)a[i]=mx;
    }
    for(int i=0;i<n;i+=2)
    {
        int mx=0;
        if(i)mx=max(mx,a[i]-a[i-1]+1);
        if(i+1<n)mx=max(mx,a[i]-a[i+1]+1);
        ans+=mx;
    }
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