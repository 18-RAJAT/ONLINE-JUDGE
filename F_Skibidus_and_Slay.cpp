#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<vector<int>>g(n);
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        g[u].push_back(v);g[v].push_back(u);
    }
    string ans=string(n,'0');
    for(int i=0;i<n;++i)
    {
        map<int,int>mp;
        mp[a[i]]++;
        for(auto& it:g[i])mp[a[it]]++;
        for(auto& it:mp)
        {
            if(it.second>=2)ans[it.first-1]='1';
        }
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