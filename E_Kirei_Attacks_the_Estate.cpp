#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;++i)cin>>a[i];
    vector<vector<int>>g(n+1);
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int>Dp(n+1),Ndp(n+1),par(n+1);
    queue<int>q;
    par[1]=0,Dp[1]=a[1],Ndp[1]=-a[1];
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto& it:g[u])
        {
            if(it==par[u])continue;
            par[it]=u;
            Dp[it]=max(a[it],a[it]+Ndp[u]);
            Ndp[it]=-a[it]+Dp[u];
            q.push(it);
        }
    }
    for(int i=1;i<=n;++i)cout<<Dp[i]<<(i==n?"\n":" ");
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