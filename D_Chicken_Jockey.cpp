#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>dp(n,0);
    dp[0]=a[0];
    if(n>=2)dp[1]=min(dp[0]+a[1]-1,max(0LL,a[1])+a[0]);
    for(int i=2;i<n;++i)dp[i]=min(dp[i-1]+a[i]-1,dp[i-2]+a[i-1]+max(0LL,a[i]-i));
    cout<<dp[n-1]<<endl;
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