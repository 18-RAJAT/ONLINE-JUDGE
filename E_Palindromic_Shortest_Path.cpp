#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<vector<int>>adj(n,vector<int>(n,-1));
    deque<pair<int,int>>dq;
    for(int i=0;i<n;++i)
    {
        adj[i][i]=0;
        dq.push_back({i,i});
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(a[i][j]!='-' && i!=j)// && a[i][j]==a[j][i])
            {
                if(adj[i][j]==-1 || adj[i][j]>1)
                {
                    adj[i][j]=1;
                    dq.push_back({i,j});
                }
            }
        }
    }
    vector<vector<pair<int,char>>>in(n),out(n);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(a[i][j]!='-')
            {
                out[i].push_back({j,a[i][j]});
                in[j].push_back({i,a[i][j]});
            }
        }
    }
    while(!dq.empty())
    {
        auto u=dq.front().first,v=dq.front().second;
        dq.pop_front();
        int tp=adj[u][v];
        for(auto& it:in[u])
        {
            int F=it.first,S=it.second;
            for(auto& it1:out[v])
            {
                if(it1.second==S)
                {
                    int x=it1.first,y=tp+2;
                    if(adj[F][x]==-1 || adj[F][x]>y)
                    {
                        adj[F][x]=y;
                        // assert(!dq.empty() && ~dq.front().first);
                        dq.push_back({F,x});
                    }
                }
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<adj[i][j]<<(j+1==n?"\n":" ");
        }
    }
}
signed main()
{
    sol();
    return 0;
}