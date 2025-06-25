#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    vector<pair<int,int>>vp(k);
    for(int i=0;i<k;++i)
    {
        string s;
        cin>>s;
        char ch=s[0];
        int x=ch-'a'+1;
        int y=stoll(s.substr(1));
        assert(1<=x && x<=m && 1<=y && y<=n);
        vp[i]={x,y};
    }
    vector<int>ar,br;
    unordered_map<int,int>mp1,mp2;
    for(int i=1-m;i<n;++i)
    {
        mp1[i]=ar.size();
        ar.push_back(0);
        br.push_back(i);
    }
    for(int i=2;i<=n+m;++i)
    {
        mp2[i]=ar.size();
        ar.push_back(1);
        br.push_back(i);
    }
    vector<vector<int>>adj(ar.size());
    for(auto& it:mp1)
    {
        int F=it.first,S=it.second;
        for(auto& i:mp2)
        {
            int f=i.first,s=i.second,dif=f-F;
            if(dif&1)continue;
            int x=dif/2,y=(f+F)/2;
            if(1<=x && x<=m && 1<=y && y<=n)
            {
                adj[S].push_back(s);
                adj[s].push_back(S);
            }
        }
    }
    vector<int>msk(ar.size(),0);
    for(int i=0;i<k;++i)
    {
        int x=vp[i].first,y=vp[i].second,dif=y-x,tot=y+x;
        assert(mp1.count(dif) && mp2.count(tot));
        msk[mp1[dif]]|=(1<<i);
        msk[mp2[tot]]|=(1<<i);
    }
    vector<vector<int>>dist(ar.size(),vector<int>(1<<k,1e9));
    int t1=mp1[0],t2=msk[t1];
    queue<pair<int,int>>q;
    dist[t1][t2]=0;
    q.push({t1,t2});
    int ans=-1;
    while(!q.empty())
    {
        int u=q.front().first,mask=q.front().second;
        q.pop();
        int d=dist[u][mask];
        if(mask==(1<<k)-1)
        {
            ans=d;
            break;
        }
        for(auto& it:adj[u])
        {
            int check=mask|msk[it];
            if(d+1<dist[it][check])
            {
                dist[it][check]=d+1;
                q.push({it,check});
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