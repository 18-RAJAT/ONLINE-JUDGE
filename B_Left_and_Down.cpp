#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b,k;
    cin>>a>>b>>k;
    int g=__gcd(a,b);
    a/=g,b/=g;
    cout<<((a<=k && b<=k)?1:2)<<endl;
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