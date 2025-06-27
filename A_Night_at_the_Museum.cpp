#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    char ch='a';
    int ans=0;
    for(auto& it:s)
    {
        ans=ans+min(abs(ch-it),26-abs(ch-it));
        ch=it;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}