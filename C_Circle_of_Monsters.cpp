#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;++i)cin>>vp[i].first>>vp[i].second;
    vector<int>a(n);
    for(int i=0;i<n;++i)
    {
        (i==0)?a[i]=vp[i].first-vp[n-1].second:a[i]=vp[i].first-vp[i-1].second;
        if(a[i]<0)a[i]=0;
        if(i>=1)a[i]+=a[i-1];
    }
    int ans=1e18;
    for(int i=0;i<n;++i)ans=min(ans,vp[i].first+a[n-1]-a[i]+(i>=1?a[i-1]:0));
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