#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    map<int,int>mp;
    int ans=0;
    for(int j=0;j<n;++j)
    {
        ans+=mp[j-a[j]];
        mp[a[j]+j]++;
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}