#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n+5);
    for(int i=1;i<=n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vector<int>ar(n+5,0),br(n+5,0),r1(n+5,0),r2(n+5,0);
    queue<int>q;
    q.push(1);
    br[1]=1,r2[1]=1;
    while(!q.empty())
    {
        auto F=q.front();
        q.pop();
        for(auto& it:a[F])
        {
            if(it==ar[F])continue;
            ar[it]=F,br[it]=br[F]+1;
            r1[F]++,r2[br[it]]++;
            q.push(it);
        }
    }
    int ans1=0,ans2=0;
    for(int i=1;i<=n;++i)ans1=max(ans1,r2[i]);
    for(int i=1;i<=n;++i)ans2=max(ans2,r1[i]);
    cout<<max(ans1,ans2+1)<<endl;
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