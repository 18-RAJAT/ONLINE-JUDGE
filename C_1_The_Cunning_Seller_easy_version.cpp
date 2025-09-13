#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=0,chk=3,cnt=0;
    while(n)
    {
        int m=n%3;
        n/=3,ans+=(cnt*chk/9+chk)*m,chk*=3,cnt++;
    }
    cout<<ans<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}