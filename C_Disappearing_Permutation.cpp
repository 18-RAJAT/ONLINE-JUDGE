#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>p(n),d(n);
    for(int i=0;i<n;++i)cin>>p[i],p[i]--;
    for(int i=0;i<n;++i)cin>>d[i],d[i]--;
    vector<int>ar,vis(n),tmp(n,-1);
    int cnt=0,res=0;
    for(int i=0;i<n;++i)
    {
        if(!vis[i])
        {
            int x=i,chk=0;
            while(!vis[x])
            {
                vis[x]=1,tmp[x]=cnt,chk++,x=p[x];
            }
            ar.push_back(chk);
            cnt++;
        }
    }
    vector<int>br(cnt),ans(n);
    for(int i=0;i<n;++i)
    {
        if(!br[tmp[d[i]]])br[tmp[d[i]]]=1,res+=ar[tmp[d[i]]];
        ans[i]=res;
    }
    for(int i=0;i<n;++i)cout<<ans[i]<<" ";
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