#include"bits/stdc++.h"
using namespace std;
#define int long long
void dfs(int u,int p,vector<vector<int>>& adj,vector<int>& dep,int& ans)
{
    vector<int>a;
    for(auto& it:adj[u])
    {
        if(it!=p)
        {
            dfs(it,u,adj,dep,ans);
            dep[u]=max(dep[u],dep[it]+1);
            a.push_back(dep[it]);
        }
    }
    if(a.size()>=2)
    {
        sort(a.begin(),a.end(),greater<int>());
        ans+=1+a[1];
    }
}
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n);
    for(int i=1;i<n;++i)
    {
        int x;
        cin>>x;
        x--;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    vector<int>dep(n);
    int ans=n;
    dfs(0,-1,adj,dep,ans);
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