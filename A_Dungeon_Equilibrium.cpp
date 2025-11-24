#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(auto& it:a)
    {
        cin>>it;
        mp[it]++;
    }
    int ans=0;
    for(auto& it:mp)
    {
        if(it.second>=it.first)ans+=it.second-it.first;
        else ans+=it.second;
    }
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