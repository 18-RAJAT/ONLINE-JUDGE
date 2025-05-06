#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=150005;
vector<int>g[N];
int vis[N];

//Rajat joshi template
pair<int,int>Bfs(int val,vector<int>& res)
{
    queue<int>q;
    unordered_map<int,int>mp;
    q.push(val);
    mp[val]=0;
    int s=val,d=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(auto& it:g[x])
        {
            if(!vis[it] && !mp.count(it))
            {
                mp.emplace(it,mp[x]+1);//rep test
                q.push(it);
                if(d<mp[it] || (mp[it]==d && s<it))d=mp[it],s=it;
            }
            // for(auto& it1:g[it])
            // {
            //     if(!vis[it1] && !mp.count(it1))
            //     {
            //         mp[it1]=mp[x]+1;
            //         q.push(it1);
            //     }
            // }
            // cout<<"par-> "<<it<<" "<<mp[it]<<endl;
        }
    }
    if(res.empty())
    {
        for(auto& it:mp)res.push_back(it.first);
    }
    return {s,d};
}
vector<int>Path(int u,int v)
{
    queue<int>q;
    unordered_map<int,int>mp;
    q.push(u);
    mp[u]=-1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        if(x==v)break;
        for(auto& it:g[x])
        {
            if(!vis[it] && !mp.count(it))//again chk <<--L
            {
                mp[it]=x;
                q.push(it);
            }
        }
    }
    vector<int>ans;
    int cur=v;
    while(~cur)
    {
        ans.push_back(cur);
        cur=mp[cur];//chk<<--L2-3
    }
    // ans.push_back(u);
    // vis[u]=1,vis[v]=1;
    // sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    return ans;
}
tuple<int,int,int,vector<int>>cmp(int val)
{
    vector<int>in,out;
    int u=Bfs(val,in).first,v=Bfs(u,out).first;
    vector<int>ar=Path(u,v);
    // assert(in.size()==out.size());
    return make_tuple(ar.size(),max(u,v),min(u,v),ar);
}
void sol()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)g[i].clear(),vis[i]=0;
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    priority_queue<tuple<int,int,int,vector<int>>>pq;
    pq.push(cmp(1));
    vector<int>ans;
    while(!pq.empty())
    {
        tuple<int,int,int,vector<int>>tp=pq.top();
        pq.pop();
        int d=get<0>(tp),u=get<1>(tp),v=get<2>(tp);
        vector<int>path=get<3>(tp);
        ans.push_back(d);
        ans.push_back(u);
        ans.push_back(v);
        // cout<<u<<" "<<v<<" "<<d<<endl;
        for(auto& it:path)vis[it]=1;
        vector<int>src;
        for(auto& it:path)
        {
            for(auto& it1:g[it])
            {
                if(!vis[it1])
                {
                    vis[it1]=1;
                    src.push_back(it1);
                }
            }
        }
        for(auto& it:src)vis[it]=0;
        vector<bool>ok(n+5,0);
        for(auto& it:src)
        {
            if(!vis[it] && !ok[it])
            {
                vector<int>res;
                Bfs(it,res);
                // for(int i=0;i<res.size();++i)
                // {
                //     if(!vis[res[i]])vis[res[i]]=1;
                //     else if(vis[res[i]]==1)vis[res[i]]=2;
                //     else
                //     {
                //         if(!ok[res[i]])ok[res[i]]=1;
                //     }
                // }
                for(auto& it1:res)ok[it1]=1;
                pq.push(cmp(*min_element(res.begin(),res.end())));
            }
        }
    }
    for(auto& it:ans)cout<<it<<" ";
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