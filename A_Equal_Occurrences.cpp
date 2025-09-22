#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    map<int,int>mp;
    for(auto& it:a)mp[it]++;
    vector<int>ar;
    for(auto& it:mp)ar.push_back(it.second);
    sort(ar.begin(),ar.end());
    int ans=0;
    for(int i=0;i<ar.size();++i)
    {
        ans=max(ans,ar[i]*(ar.size()-i));
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