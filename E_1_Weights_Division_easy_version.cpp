#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,s;
    cin>>n>>s;
    vector<int>w(n-1),cnt(n-1);
    vector<vector<pair<int,int>>>g(n);
    for(int i=0;i<n-1;++i)
    {
        int x,y;
        cin>>x>>y>>w[i];
        x--;y--;
        g[x].push_back({y,i});
        g[y].push_back({x,i});
    }
    stack<tuple<int,int,int>>st;
    st.push(make_tuple(0,-1,-1));
    vector<int>vis(n);
    while(!st.empty())
    {
        int v,p,ok;
        tie(v,p,ok)=st.top();
        if(!vis[v])
        {
            vis[v]=1;
            for(auto& it:g[v])if(it.second!=ok)st.push(make_tuple(it.first,v,it.second));
        }
        else
        {
            st.pop();
            if(~ok)
            {
                if((int)g[v].size()==1)cnt[ok]=1;
                for(auto& it:g[v])if(it.second!=ok)cnt[ok]+=cnt[it.second];
            }
        }
    }
    auto check=[&](int i){return w[i]*cnt[i]-(w[i]/2)*cnt[i];};
    set<pair<int,int>>pq;
    int cur=0;
    for(int i=0;i<n-1;++i)
    {
        pq.insert({check(i),i});
        cur+=w[i]*cnt[i];
    }
    int ans=0;
    while(s<cur)
    {
        int tmp=pq.rbegin()->second;
        pq.erase(--pq.end());
        cur-=check(tmp);
        w[tmp]/=2;
        pq.insert({check(tmp),tmp});
        ans++;
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