#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<pair<int,int>>adj[100005];
int ans=0;
void dfs(int node=1,int parent=0,int dist=0)
{
    ans=max(ans,dist);
    for(int i=0;i<adj[node].size();++i)
    {
        int nxt=adj[node][i].first,wt=adj[node][i].second;
        if(nxt!=parent)dfs(nxt,node,dist+wt);
    }
}
void sol()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n-1;++i)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
        res+=w;
    }
    res*=2;
    dfs();
    cout<<res-ans<<endl;
}
signed main()
{
    sol();
    return 0;
}