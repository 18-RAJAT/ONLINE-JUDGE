#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto& it:a)cin>>it;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    vector<int>dp(n+1,4e18);
    for(auto& it:a)
    {
        if(it<=n)dp[it]=1;
        else continue;
        for(int i=1;i*it<=n;++i)
        {
            if(dp[i]<4e18)dp[i*it]=min(dp[i*it],dp[i]+1);
        }
    }
    for(int i=1;i<=n;++i)cout<<(dp[i]<4e18?dp[i]:-1)<<" \n"[i==n];
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}