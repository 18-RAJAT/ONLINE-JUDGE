#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>vp;
    for(int i=0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        vp.push_back({{x,y},i});
    }
    sort(vp.begin(),vp.end());
    vector<tuple<int,int,int>>ar,br;
    for(int i=0;i<n/2;++i)ar.push_back({vp[i].first.second,vp[i].first.first,vp[i].second});
    for(int i=n/2;i<n;++i)br.push_back({vp[i].first.second,vp[i].first.first,vp[i].second});
    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());
    for(int i=0;i<n/2;++i)cout<<get<2>(ar[i])+1<<" "<<get<2>(br[n/2-1-i])+1<<endl;
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