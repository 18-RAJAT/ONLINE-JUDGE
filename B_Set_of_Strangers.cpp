#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    unordered_map<int,int>mp;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];
            if(!mp.count(a[i][j]))mp[a[i][j]]=1;
            if(j && a[i][j]==a[i][j-1])mp[a[i][j]]=2;
            if(i && a[i][j]==a[i-1][j])mp[a[i][j]]=2;
            assert(mp[a[i][j]]<=2);
        }
    }
    int ans=0,mx=0;
    for(auto& it:mp)ans+=it.second,mx=max(mx,it.second);
    cout<<ans-mx<<endl;
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