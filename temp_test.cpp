#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;cin>>n;vector<int>a(n);for(int i=0;i<n;++i)cin>>a[i];
    vector<int>cnt(n+1,0);ST st;st.init(n);int g=0;
    for(int i=0;i<n;++i)
    {
        g=gg(g,a[i]);
        for(int j=0;j<(int)dv[a[i]].size();++j){int d=dv[a[i]][j];if(d<=n){++cnt[d];st.upd(d,cnt[d]);}}
        int ans=g<n?st.qry(g+1,n):0;cout<<ans<<(i+1==n?'\n':' ');
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;dv.assign(MV+1,vector<int>());
    for(int d=1;d<=MV;++d){for(int m=d;m<=MV;m+=d)dv[m].push_back(d);}while(t--){sol();}return 0;
}