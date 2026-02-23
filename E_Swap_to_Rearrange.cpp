#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    vector<int>arr(n+5,0);
    for(int i=0;i<n;++i)
    {
        arr[a[i]]++,arr[b[i]]++;
    }
    for(int i=1;i<=n;++i)
    {
        if(arr[i]&1)
        {
            cout<<-1<<endl;
            return;
        }
    }
    vector<int>ar,br,cr;
    vector<vector<pair<int,int>>>adj(n+5);
    int m=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]!=b[i])
        {
            ar.push_back(a[i]);
            br.push_back(b[i]);
            cr.push_back(i);
            adj[a[i]].push_back({b[i],m});
            adj[b[i]].push_back({a[i],m});
            m++;
        }
    }
    vector<int>vis(m,0),tmp(n+5,0),res;
    for(int i=1;i<=n;++i)
    {
        if(adj[i].size()<=tmp[i])continue;
        stack<int>st;
        st.push(i);
        while(!st.empty())
        {
            int ok=0;
            auto F=st.top();
            while(tmp[F]<adj[F].size())
            {
                auto [x,y]=adj[F][tmp[F]];
                tmp[F]++;
                if(!vis[y])
                {
                    vis[y]=1;
                    if(F==br[y])res.push_back(cr[y]);
                    st.push(x);
                    ok=1;
                    break;
                }
                else
                {
                    ok=1;
                    break;
                }
            }
            if(!ok)st.pop();
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();++i)cout<<(i?" ":"")<<res[i]+1;
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