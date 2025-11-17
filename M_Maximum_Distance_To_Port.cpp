#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>ar(n+1),dist(n+1,1e9);
    for(int i=1;i<=n;++i)cin>>ar[i];
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int>q;
    dist[1]=0;
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto& it:adj[u])
        {
            if(dist[it]==1e9)
            {
                dist[it]=dist[u]+1;
                q.push(it);
            }
        }
    }
    vector<int>ans(k+1,0);
    for(int i=1;i<=n;++i)
    {
        ans[ar[i]]=max(ans[ar[i]],dist[i]);
    }
    for(int i=1;i<=k;++i)
    {
        if(i==k)cout<<ans[i];
        else cout<<ans[i]<<" ";
    }
}
signed main()
{
    sol();
    return 0;
}