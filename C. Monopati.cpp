#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    vector<pair<int,int>>dp(n),ndp(n);
    dp[0]={a[0],a[0]};
    for(int i=1;i<n;++i)dp[i]={min(a[i],dp[i-1].first),max(a[i],dp[i-1].second)};
    ndp[n-1]={b[n-1],b[n-1]};
    for(int i=n-2;~i;--i)ndp[i]={min(b[i],ndp[i+1].first),max(b[i],ndp[i+1].second)};
    set<pair<int,int>>st;
    for(int i=0;i<n;++i)
    {
        auto [l,r]=make_pair(dp[i],ndp[i]);
        int lo=min(l.first,r.first),hi=max(l.second,r.second);
        st.insert({lo,hi});
    }
    vector<int>ar;
    ar.resize(2*n+5);
    fill(ar.begin(),ar.end(),2*n+1);
    for(auto& [l,r]:st)ar[l]=min(ar[l],r);
    int ans=0;
    for(int i=n*2;i>=1;--i)
    {
        ar[i]=min(ar[i+1],ar[i]);
        ans+=2*n-ar[i]+1;
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