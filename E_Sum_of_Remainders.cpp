#include<bits/stdc++.h>
using namespace std;
#define int long long
int recur(int n)
{
    if(n&1)
    {
        return ((n+1)/2%1000000007)*(n%1000000007)%1000000007;
    }
    else
    {
        return ((n)/2%1000000007)*((n+1)%1000000007)%1000000007;
    }
}
void sol()
{
    int n,m;
    cin>>n>>m;
    int res=1;
    int ans=(n%1000000007)*(m%1000000007);
    while(res<=min(n,m))
    {
        int l=res,r=n;
        l=n/(n/res),l=min(l,min(n,m));
        ans-=(recur(l)-recur(res-1)+1000000007)%1000000007*((n/res)%1000000007);
        ans%=1000000007;
        res=l+1;
    }
    ans%=1000000007,ans+=1000000007,ans%=1000000007;
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}