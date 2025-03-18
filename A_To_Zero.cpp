#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int x=k-1,ans=0;
    if(n%2==0)ans=(n+x-1)/x;
    else ans=(n==k)?1:1+((n-k)+x-1)/x;
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