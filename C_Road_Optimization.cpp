#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,l,k;
    cin>>n>>l>>k;
    array<int,200005>dp,ndp;
    for(int i=0;i<n;++i)cin>>ndp[i];
    for(int i=0;i<n-1;++i)ndp[i]=ndp[i+1]-ndp[i];
    ndp[n-1]=l-ndp[n-1];
    for(int i=0;i<n;++i)cin>>dp[i];
    int res=n;
    for(int i=0;i<k;++i)
    {
        int j=1;
        for(int x=2;x<res;++x)
        {
            if((dp[x]-dp[x-1])*ndp[x]>(dp[j]-dp[j-1])*ndp[j])j=x;
        }
        ndp[j-1]+=ndp[j];
        for(int i=j;i<res-1;++i)
        {
            dp[i]=dp[i+1];
            ndp[i]=ndp[i+1];
        }
        res--;
    }
    int ans=0;
    for(int i=0;i<res;++i)ans+=dp[i]*ndp[i];
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}