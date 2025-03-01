#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),check(n,0);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        a[i]--;
        if(a[i]==0)check[0]=i;
    }
    for(int i=0;i<n;++i)check[a[i]]=i;
    vector<vector<int>>dp(n,vector<int>(n,0));
    for(int j=2;j<=n;++j)
    {
        for(int i=0;i<=n-j;++i)
        {
            int l=i+j-1;
            dp[i][l]=LLONG_MAX;
            for(int k=i;k<l;++k)
            {
                int tot=dp[i][k]+dp[k+1][l]+abs(check[k+1]-check[i]);
                dp[i][l]=min(dp[i][l],tot);
            }
        }
    }
    cout<<dp[0][n-1];
}
signed main()
{
    sol();
    return 0;
}