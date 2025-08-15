#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<vector<int>>adj(n);
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        a[u]++;a[v]++;
    }
    int cnt=count(a.begin(),a.end(),1),ans=cnt;
    for(int i=0;i<n;++i)
    {
        int x=!!(a[i]-1==0);
        for(auto& it:adj[i])x+=a[it]==1;
        ans=min(ans,cnt-x);
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