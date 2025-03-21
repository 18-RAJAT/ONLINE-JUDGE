#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            ans*=i;
            while(!(n%i))n/=i;
        }
    }
    ans*=n;
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}