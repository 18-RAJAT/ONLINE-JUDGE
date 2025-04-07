#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    reverse(a.begin(),a.end());
    map<string,int>mp;
    for(int i=0;i<n;++i)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1)cout<<a[i]<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}