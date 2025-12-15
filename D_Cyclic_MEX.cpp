#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>ar(n+5,0);
    vector<pair<int,int>>vp;
    int mex=0,res=0,ans=0;
    for(int i=0;i<n;++i)
    {
        ar[a[i]]=1;
        while(mex<=n && ar[mex])mex++;
        if(vp.empty() || vp.back().first!=mex)vp.push_back({mex,1});
        else vp.back().second++;
        res+=mex;
    }
    for(int i=0;i<n;++i)
    {
        ans=max(ans,res);
        int cnt=0;
        while(!vp.empty() && vp.back().first>a[i])
        {
            cnt+=vp.back().second;
            res-=vp.back().first*vp.back().second;
            vp.pop_back();
        }
        res+=cnt*a[i];
        if(vp.empty() || vp.back().first!=a[i])vp.push_back({a[i],cnt});
        vp.push_back({n,1});
        res+=n;
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