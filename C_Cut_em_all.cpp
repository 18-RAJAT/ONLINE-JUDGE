#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>g[400005];
int ans=0;
int dfs(int u,int v)
{
    int res=1;
    for(auto& it:g[u])
    {
        if(it==v)continue;
        int tmp=dfs(it,u);
        (tmp%2==0)?ans++:res+=tmp;
    }
    return res;
}
void sol()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)g[i].clear();
    ans=0;
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(n%2)
    {
        cout<<-1<<endl;
        return;
    }
    dfs(1,0);
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}