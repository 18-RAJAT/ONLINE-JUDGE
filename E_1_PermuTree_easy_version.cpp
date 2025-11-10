#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n);
    for(int i=1;i<n;++i)
    {
        int u;
        cin>>u;
        u--;
        adj[u].push_back(i);
    }
    vector<int>ar(n);
    int ans=0;
    function<void(int)>dfs=[&](int x)
    {
        vector<int>ok(n+1);
        ok[0]=1;
        for(auto& it:adj[x])
        {
            dfs(it);
            ar[x]+=ar[it];
            for(int i=n-ar[it];~i;--i)
            {
                if(ok[i])ok[i+ar[it]]=1;
            }
        }
        int mx=0;
        for(int i=0;i<=n;++i)
        {
            if(ok[i])mx=max(mx,i*(ar[x]-i));
        }
        ans+=mx;
        ar[x]++;
    };
    dfs(0);
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}