#include<bits/stdc++.h>
using namespace std;
#define int long long
int check(int s,int t,vector<vector<int>>& g,vector<char>& ch)
{
    if(s==t)return 1;
    int n=g.size()-1;
    vector<char>vis(n+1,0);
    queue<int>q;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto& it:g[u])
        {
            if((ch[it] && it!=t) || vis[it])continue;
            if(it==t)return 1;
            vis[it]=1;
            q.push(it);
        }
    }
    return 0;
}
void sol()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<vector<int>>g(n+1);
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1;i<g.size();++i)stable_sort(g[i].begin(),g[i].end());
    vector<int>a;
    vector<char>ch(n+1,0);
    int cur=x;
    a.push_back(cur);
    ch[cur]=1;
    while(cur!=y)
    {
        for(auto& it:g[cur])
        {
            if(ch[it])continue;
            if(it==y || check(it,y,g,ch))
            {
                a.push_back(it);
                ch[it]=1,cur=it;
                break;
            }
            // cout<<it<<" "<<endl;
        }
    }
    for(int i=0;i<a.size();++i)cout<<(i?" ":"")<<a[i];
    cout<<endl;
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