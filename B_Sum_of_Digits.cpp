#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int ans=0;
    while(s.size()>=2)
    {
        int tot=0;
        for(auto& it:s)tot+=it-'0';
        ans++;
        s=to_string(tot);
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}