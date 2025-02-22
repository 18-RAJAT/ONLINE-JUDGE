#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int>deg,in,cmp;
vector<vector<int>>adj,c1,c2;
unordered_set<int>st;
void dfs(int v,int w)
{
    stack<int>s;
    s.push(v);
    cmp[v]=w;
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        for(auto& nxt:c1[u])
        {
            if(!cmp[nxt])
            {
                cmp[nxt]=w;
                s.push(nxt);
            }
        }
    }
}
void sol()
{
    cin>>n;
    adj.resize(n+1);
    deg.resize(n+1,0);
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
    in.resize(n+1,0);
    vector<int>chk;
    for(int i=1;i<=n;++i)
    {
        if(deg[i]>=4)
        {
            in[i]=1;
            chk.push_back(i);
        }
    }
    if(chk.empty())
    {
        cout<<-1<<endl;
        return;
    }
    c1.resize(n+1);
    for(auto& it:chk)
    {
        for(auto& it1:adj[it])
        {
            if(in[it1])
            {
                c1[it].push_back(it1);
                c1[it1].push_back(it);
            }
        }
    }
    cmp.resize(n+1,0);
    int cnt=0;
    for(auto& it:chk)
    {
        if(!cmp[it])
        {
            cnt++;
            dfs(it,cnt);
        }
    }
    c2.resize(cnt+1);
    for(auto& it:chk)
    {
        c2[cmp[it]].push_back(it);
    }
    int ans=-1;
    for(int i=1;i<=cnt;++i)
    {
        int m=c2[i].size();
        st.clear();
        vector<int>res(n+1,0);
        for(auto& it:c2[i])
        {
            res[it]=1;
        }
        for(auto& it:c2[i])
        {
            for(auto& it1:adj[it])
            {
                if(!res[it1])st.insert(it1);
            }
        }
        if((int)st.size()>=2*m+2)ans=max(ans,3*m+2);
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}