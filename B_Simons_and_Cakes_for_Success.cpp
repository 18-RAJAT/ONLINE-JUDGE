#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=1;
    if(n%2==0)
    {
        ans*=2;
        while(n%2==0)n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            ans*=i;
            while(n%i==0)n/=i;
        }
    }
    if(n>=2)ans*=n;
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