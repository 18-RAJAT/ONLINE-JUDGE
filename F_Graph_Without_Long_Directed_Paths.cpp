#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int>color(n+1,-1),edges;
    function<int(int,int)>dfs=[&](int s,int x)->int
    {
        if(~color[s])return color[s]!=x;
        color[s]=x^1;
        int ans=1;
        for(auto& it:adj[s])ans&=dfs(it,color[s]);
        return ans;
    };
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back(v);
    }
    if(!dfs(1,0))
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<edges.size();++i)cout<<1-color[edges[i]];
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}