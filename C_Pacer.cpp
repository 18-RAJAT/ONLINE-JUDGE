#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
    }
    int pos=0,ans=0;
    for(int i=0;i<n;++i)
    {
        int f=vp[i].first,s=vp[i].second;
        int chk=f-(i==0?0:vp[i-1].first);
        if((~chk&1 && pos==s) || (chk&1 && pos!=s))ans+=chk;
        else ans+=chk-1;
        pos=s;
    }
    int res=m-vp[n-1].first;
    ans+=res;
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