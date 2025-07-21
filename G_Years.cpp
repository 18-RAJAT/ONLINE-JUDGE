#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        vp.push_back({a,1});
        vp.push_back({b,0});
    }
    sort(vp.begin(),vp.end());
    int cnt=0,ans=0,res=0;
    for(int i=0;i<2*n;++i)
    {
        (vp[i].second==1)?cnt++:cnt--;
        if(ans<cnt)
        {
            ans=cnt;
            res=vp[i].first;
        }
    }
    cout<<res<<" "<<ans;
}
signed main()
{
    sol();
    return 0;
}