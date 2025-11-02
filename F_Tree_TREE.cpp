#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>a(n);
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vector<int>res(n);
    int ans=0;
    function<void(int,int)>dfs=[&](int u,int p)->void
    {
        res[u]=1;
        for(auto& it:a[u])
        {
            if(it==p)continue;
            dfs(it,u);
            res[u]+=res[it];
        }
        int chk=1;
        for(auto& it:a[u])
        {
            if(it!=p)
            {
                if(k<=n-res[it])chk+=res[it];
            }
        }
        if(k<=res[u])chk+=n-res[u];
        ans+=chk;
    };
    dfs(0,-1);
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