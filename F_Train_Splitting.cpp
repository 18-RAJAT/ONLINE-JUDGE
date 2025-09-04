#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>vp(n);
    for(int i=0;i<m;++i)
    {
      int u,v;
      cin>>u>>v;
      u--;v--;
      vp[u].push_back({v,i});
      vp[v].push_back({u,i});
    }
    vector<int>ans(m);
    int ok=0;
    for(int i=0;i<n;++i)
    {
      if(vp[i].size()<n-1)
      {
        for(auto& it:vp[i])ans[it.second]=1;
        ok=1;
        break;
      }
    }
    if(!ok)
    {
        for(int i=0;i<=n-2;++i)ans[vp[0][i].second]=1;ans[vp[0][n-2].second]=2;
    }
    cout<<*max_element(ans.begin(),ans.end())+1<<endl;
    for(auto& it:ans)cout<<it+1<<" ";
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