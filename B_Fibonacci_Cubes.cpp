#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int a[4],dp[n+5];
    dp[1]=1,dp[2]=2;
    if(n>=3)
    {
        for(int i=3;i<=n;++i)dp[i]=dp[i-1]+dp[i-2];
    }
    for(int i=1;i<=m;++i)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<(dp[n]+dp[n-1]<=a[2] && dp[n]<=a[1] && dp[n]<=a[0])?1:0;
    }
    cout<<endl;
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