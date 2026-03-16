#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;++i)cin>>s[i];
    for(int i=0;i<n;++i)
    {
        if(s[i][i]!='1')
        {
            cout<<"No"<<endl;
            return;
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(s[i][j]=='1' && s[j][i]=='1')
            {
                cout<<"No"<<endl;
                return;
            }
        }
    }
    vector<pair<int,int>>vp;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i==j || s[i][j]=='0')continue;
            int ok=1;
            for(int k=0;k<n;++k)
            {
                if(k==i || k==j)continue;
                if(s[i][k]=='1' && s[k][j]=='1')
                {
                    ok=0;
                    break;
                }
            }
            if(ok)vp.push_back({i,j});
        }
    }
    if(vp.size()!=n-1)
    {
        cout<<"No"<<endl;
        return;
    }
    vector<int>p(n),sz(n,1);
    for(int i=0;i<n;++i)p[i]=i;
    auto recur=[&](int x)
    {
        while(p[x]!=x)
        {
            p[x]=p[p[x]];
            x=p[x];
        }
        return x;
    };
    for(int i=0;i<vp.size();++i)
    {
        int x=recur(vp[i].first),y=recur(vp[i].second);
        if(x==y)
        {
            cout<<"No"<<endl;
            return;
        }
        if(sz[x]<sz[y])swap(x,y);
        p[y]=x,sz[x]+=sz[y];
    }
    for(int i=1;i<n;++i)
    {
        if(recur(i)!=recur(0))
        {
            cout<<"No"<<endl;
            return;
        }
    }
    vector<vector<int>>ar(n);
    for(int i=0;i<vp.size();++i)ar[vp[i].first].push_back(vp[i].second);
    for(int i=0;i<n;++i)
    {
        vector<int>vis(n,0);
        queue<int>q;
        vis[i]=1;
        q.push(i);
        while(!q.empty())
        {
            int F=q.front();
            q.pop();
            for(int i=0;i<ar[F].size();++i)
            {
                int tp=ar[F][i];
                if(!vis[tp])
                {
                    vis[tp]=1;
                    q.push(tp);
                }
            }
        }
        for(int j=0;j<n;++j)
        {
            if(vis[j]!=(s[i][j]-'0'))
            {
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<vp.size();++i)cout<<vp[i].first+1<<" "<<vp[i].second+1<<endl;
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