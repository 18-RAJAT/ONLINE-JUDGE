#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    map<char,int>mp;
    mp={{'1',a},{'2',b},{'3',c},{'4',d}};
    int ans=0;
    for(auto& it:s)ans+=mp[it];
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}