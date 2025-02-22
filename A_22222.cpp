#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    string ans;
    for(auto& it:s)if(it=='2')ans+=it;
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}