#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>dp(n+5,1e18);
    for(int i=0;i<n;++i)cin>>a[i];
    dp[n]=0;
    for(int i=n-1;~i;--i)
    {
        for(int j=i;j<n;++j)
        {
            dp[i]=min(dp[i],dp[j+1]+(j-i)*2+1LL*(j-i+1)*a[i]);
        }
        for(int j=0;j<i;++j)
        {
            dp[j]=min(dp[j],dp[i]+(i-j)+1LL*(i-j)*a[i]);
        }
    }
    cout<<dp[0]<<endl;
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