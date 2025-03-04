#include<bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int u,int p,vector<vector<int>>&adj,int c=0)
{
    for(auto& it:adj[u])
    {
        if(it==p)continue;
        dfs(it,u,adj,c+1);
    }
    cout<<u+1<<" ";
}
void sol()
{
    int n;
    cin>>n;
    int se,en;
    cin>>se>>en;
    se--,en--;
    vector<vector<int>>adj(n);
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(en,-1,adj);
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