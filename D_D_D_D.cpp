#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,l;
    cin>>n>>m>>l;
    int sum=0,mn=LLONG_MAX,cnt=0;
    vector<int>a(l);
    for(int i=0;i<l;++i)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2)
        {
            cnt++,mn=min(mn,a[i]);
        }
    }
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ar(n+1,-1);
    ar[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto& it:adj[u])
        {
            if(ar[it]==-1)
            {
                ar[it]=ar[u]+1;
                q.push(it);
            }
        }
    }
    // for(int i=1;i<=n;++i)assert(~ar[i] || adj[i].empty());
    int ok=1;
    for(int i=1;i<=n && ok;++i)
    {
        for(auto& it:adj[i])
        {
            if(ar[i]%2==ar[it]%2)
            {
                ok=0;
                break;
            }
        }
    }
    string ans(n,'0');
    int check=(cnt>=1?sum-mn:-1),tot=sum%2;
    for(int i=1;i<=n;++i)
    {
        if(sum<ar[i])
        {
            ans[i-1]='0';
        }
        else
        {
            if(!ok)
            {
                ans[i-1]='1';
            }
            else
            {
                if(ar[i]%2==tot)
                {
                    ans[i-1]='1';
                }
                else
                {
                    if(cnt>=1 && check>=ar[i])ans[i-1]='1';
                }
            }
        }
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