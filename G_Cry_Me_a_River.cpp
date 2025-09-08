#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<int>>adj(n+1),res(n+1);
    vector<int>out(n+1,0);
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        res[v].push_back(u);
        out[u]++;
    }
    vector<int>in(n+1,0);
    for(int i=1;i<=n;++i)
    {
        for(auto& it:adj[i])in[it]++;
    }
    vector<int>ar;
    queue<int>qu;
    for(int i=1;i<=n;++i)
    {
        if(in[i]==0)qu.push(i);
    }
    while(!qu.empty())
    {
        int u=qu.front();
        qu.pop();
        ar.push_back(u);
        for(auto& it:adj[u])
        {
            in[it]--;
            if(in[it]==0)qu.push(it);
        }
    }
    reverse(ar.begin(),ar.end());
    vector<char>chk(n+1,0),dp(n+1,0),ndp(n+1,0);
    vector<int>c1(n+1,0),c2(n+1,0),c3(n+1,0);
    for(auto& u:ar)
    {
        if(adj[u].empty())
        {
            dp[u]=1,ndp[u]=1;
        }
        else
        {
            for(auto& it:adj[u])
            {
                if(adj[it].empty() || ndp[it])c1[u]++;
                if(adj[it].empty() || dp[it])c2[u]++;
            }
            dp[u]=(c1[u]>0);
            ndp[u]=(c2[u]==adj[u].size());
        }
    }
    queue<int>q1,q2;
    while(q--)
    {
        int t,u;
        cin>>t>>u;
        if(t==1)
        {
            if(chk[u])continue;
            chk[u]=1;
            int p1=dp[u],p2=ndp[u];
            dp[u]=0,ndp[u]=0;
            for(auto& it:res[u])
            {
                c3[it]++;
                if(adj[u].empty() || p2)
                {
                    c1[it]--;
                    if(c1[it]==0 && dp[it])
                    {
                        dp[it]=0;
                        q1.push(it);
                    }
                }
                if(adj[u].empty() || p1)c2[it]--;
                if(c3[it]==1)
                {
                    if(ndp[it])
                    {
                        ndp[it]=0;
                        q2.push(it);
                    }
                }
            }
            while(!q1.empty())
            {
                int x=q1.front();
                q1.pop();
                for(auto& it:res[x])
                {
                    if(!adj[x].empty())
                    {
                        c2[it]--;
                        if(c3[it]==0)
                        {
                            if(c2[it]+1==adj[it].size())
                            {
                                if(ndp[it])
                                {
                                    ndp[it]=0;
                                    q2.push(it);
                                }
                            }
                        }
                    }
                }
            }
            while(!q2.empty())
            {
                int x=q2.front();
                q2.pop();
                for(auto& it:res[x])
                {
                    if(!adj[x].empty())
                    {
                        c1[it]--;
                        if(c1[it]==0 && dp[it])
                        {
                            dp[it]=0;
                            q1.push(it);
                        }
                    }
                }
            }
        }
        else
        {
            cout<<(chk[u]?"NO":(dp[u]?"YES":"NO"))<<endl;
        }
    }
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