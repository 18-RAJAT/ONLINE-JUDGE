#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>g(n+5);
    for(int i=1;i<n;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int>ar(n+5),br(n+5),sz(n+5),par(n+5);
    int tp=0;
    function<void(int,int)>dfs=[&](int u,int p)->void
    {
        par[u]=p;
        ar[u]=tp++;
        sz[u]=1;
        for(int i=0;i<g[u].size();++i)
        {
            int v=g[u][i];
            if(v!=p)
            {
                dfs(v,u);
                sz[u]+=sz[v];
            }
        }
        br[u]=tp;
    };
    dfs(1,0);
    int mn=0;
    for(int i=2;i<=n;++i)mn+=min(sz[i],n-sz[i]);
    int ok=-1,ans1=-1,ans2=-1;
    for(int i=2;i<=n;++i)
    {
        int p=par[i],mn1=min(p,i),mx1=max(p,i);
        // cout<<mn1<<" "<<mx1<<endl;
        // for(auto& it:g[i])cout<<it<<" ";cout<<endl;
        int chk=(p<i?sz[i]:n-sz[i]),val=mn-min(chk,n-chk);
        // int mn2=min(sz[mn1],n-sz[mn1]),mx2=min(sz[mx1],n-sz[mx1]);
        // val+=min(mn2,mx2);
        if(ok<val)ok=val,ans1=mn1,ans2=mx1;
    }
    vector<vector<int>>g1(n+1);

    //again look this candd->>
    for(int u=1;u<=n;++u)
    {
        if(u!=ans2)
        {
            for(int i=0;i<g[u].size();++i)
            {
                int v=g[u][i];
                if(v!=ans1)g1[u].push_back(v);
            }
        }
    }
    for(int i=0;i<g[ans2].size();++i)
    {
        int x=g[ans2][i];
        if(x!=ans1)
        {
            g1[ans1].push_back(x);
            g1[x].push_back(ans1);
        }
    }
    int res=-1;
    vector<int>s(n+1);
    int tot=n-1;
    function<void(int,int)>dfs1=[&](int u,int p)->void
    {
        s[u]=1;
        int ok=1;
        for(int i=0;i<g1[u].size();++i)
        {
            int v=g1[u][i];
            if(v!=p)
            {
                dfs1(v,u);
                s[u]+=s[v];
                if(s[v]>tot/2)ok=0;
            }
        }
        if(tot-s[u]>tot/2)ok=0;
        // else if(tot-s[u]==tot/2)tot--;
        if(ok)res=u;
    };
    dfs1(ans1,0);
    if(res==-1)res=ans1;
    vector<vector<int>>arr;
    arr.push_back(vector<int>(1,res));
    vector<int>id(n+1,-1);
    id[res]=0;
    int nxt=1;
    for(int i=0;i<g1[res].size();++i)
    {
        int v=g1[res][i];
        if(id[v]==-1)
        {
            vector<int>cur;
            function<void(int,int)>dfs2=[&](int u,int p)->void
            {
                id[u]=nxt;
                cur.push_back(u);
                for(int j=0;j<g1[u].size();++j)
                {
                    int x=g1[u][j];
                    if(x!=p && x!=res)dfs2(x,u);
                }
                // if(id[u]==nxt)nxt++;
                // else id[u]=-1;
            };
            dfs2(v,res);
            arr.push_back(cur);
            nxt++;
        }
    }
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<arr.size();++i)pq.emplace(arr[i].size(),i);
    vector<pair<int,int>>vp;
    while(pq.size()>=2)
    {
        pair<int,int>p1=pq.top();pq.pop();
        pair<int,int>p2=pq.top();pq.pop();
        int i=p1.second,j=p2.second;
        int u=arr[i].back();arr[i].pop_back();
        int v=arr[j].back();arr[j].pop_back();
        vp.emplace_back(u,v);
        // cout<<u<<" "<<v<<endl;
        // for(int k=0;k<arr[i].size();++k)pq.emplace(arr[i][k],i);
        if(!arr[i].empty())pq.emplace(arr[i].size(),i);
        if(!arr[j].empty())pq.emplace(arr[j].size(),j);
    }
    vector<int>rem;
    for(int i=0;i<arr.size();++i)
    {
        for(int j=0;j<arr[i].size();++j)
        {
            rem.push_back(arr[i][j]);
        }
    }
    // for(auto& it:vp)
    // {
    //     for(auto& it1:g1[it.first])
    //     {
    //         if(it1!=it.second && it1!=ans1 && it1!=ans2)rem.push_back(it1);
    //         int p=par[it1];
    //         if(p!=ans1 && p!=ans2)rem.push_back(p);
    //     }
    //     if(it.first!=ans1 && it.first!=ans2)rem.push_back(it.first);
    //     int rem=par[it.second];
    //     if(rem!=ans1 && rem!=ans2)rem.push_back(rem);
    // }
    for(int i=0;i+1<rem.size();i+=2)vp.emplace_back(rem[i],rem[i+1]);
    vector<int>val(n+1);
    int ct=1;
    for(int i=0;i<vp.size();++i)
    {
        int u=vp[i].first,v=vp[i].second;
        // cout<<u<<" "<<v<<endl;
        val[u]=ct,val[v]=ct;
        ct++;
    }
    val[ans2]=0;
    if(ans1<ans2)cout<<ans1<<" "<<ans2<<endl;
    else cout<<ans2<<" "<<ans1<<endl;
    for(int i=1;i<=n;++i)cout<<val[i]<<" ";
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