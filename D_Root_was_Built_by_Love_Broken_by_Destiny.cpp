#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
int fact[200005];
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>g[n+1];
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    int par[n+1],dis[n+1],color[n+1],ok=1;
    memset(dis,-1,sizeof dis);
    function<void(int)> dfs=[&](int v)
    {
        for(auto& it:g[v])
        {
            if(!ok)return;
            if(it==par[v])continue;
            if(~dis[it])
            {
                ok=0;
                return;
            }
            color[it]=1-color[v];
            dis[it]=dis[v]+1;
            par[it]=v;
            dfs(it);
        }
    };
    dis[1]=0;
    par[1]=0;
    color[1]=0;
    dfs(1);
    if(!ok)
    {
        cout<<0<<endl;
        return;
    }
    int x=1;
    for(int i=1;i<=n;++i)if(dis[i]>dis[x])x=i;
    memset(dis,-1,sizeof dis);
    dis[x]=0;
    par[x]=0;
    color[x]=0;
    dfs(x);
    int y=1;
    for(int i=1;i<=n;++i)if(dis[i]>dis[y])y=i;
    int ar[n+1]={0},cur=y,len=0;
    while(cur)
    {
        len++;
        ar[cur]=1;
        cur=par[cur];
    }
    for(int i=1;i<=n;++i)
    {
        int ok=0;
        for(auto& it:g[i])ok|=ar[it];
        if(!ok)
        {
            cout<<0<<endl;
            return;
        }
    }
    int ans=2+(len!=3)*2;
    for(int i=1;i<=n;++i)
    {
        if(!ar[i])continue;
        int res=0;
        for(auto& it:g[i])res+=g[it].size()==1;
        ans*=fact[res];
        ans%=MOD;
    }
    cout<<ans%MOD<<endl;
}
signed main()
{
    fact[0]=1;
    for(int i=1;i<=2e5;++i)fact[i]=fact[i-1]*i%MOD;
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}