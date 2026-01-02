#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    unordered_map<int,int>mp,mp1,mp2;
    int res=0;
    for(int i=1;i<=n;++i)
    {
        if(mp[a[i-1]]==0)mp[a[i-1]]=i;
        mp1[a[i-1]]=i;
        mp2[a[i-1]]++;
    }
    int l=0,r=0,mx=LLONG_MAX;
    for(auto& it:mp2)
    {
        int fz=it.second,F=mp[it.first],S=mp1[it.first];
        if(res<fz)
        {
            res=fz,l=F,r=S,mx=S-F;
        }
        else if(fz==res && (S-F)<mx)
        {
            l=F,r=S,mx=S-F;
        }
    }
    cout<<l<<" "<<r;
}
signed main()
{
    sol();
    return 0;
}