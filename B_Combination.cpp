#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;++i)cin>>vp[i].second>>vp[i].first;
    sort(vp.begin(),vp.end(),greater<pair<int,int>>());
    int ans=0,res=1;
    for(int i=0;i<n;++i)
    {
        ans+=vp[i].second;
        if(--res+=vp[i].first<=0)break;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}