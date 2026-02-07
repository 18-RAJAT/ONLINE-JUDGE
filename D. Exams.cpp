#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    set<int>st[m];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]!=0)st[a[i]-1].insert(i);
    }
    for(int i=0;i<m;++i)cin>>b[i];
    auto recur=[&](int x)
    {
        map<int,int>mp;
        for(int i=0;i<x;++i)if(a[i]>=1)mp[a[i]-1]=i;
        set<pair<int,int>>sp;
        for(auto& it:mp)sp.insert({it.second,it.first});
        if((int)sp.size()<m)return 0;
        int ok=0;
        for(auto& [F,S]:sp)if(F-ok<b[S])return 0;
        else ok+=b[S]+1;
        return 1;
    };
    int l=0,r=n,ans=-1;
    while(l<=r)
    {
        int mid=l+r>>1;
        recur(mid)?ans=mid,r=mid-1:l=mid+1;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}