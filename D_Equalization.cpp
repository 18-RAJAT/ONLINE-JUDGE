#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[105][105];
void sol()
{
    int x,y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<0<<endl;
        return;
    }
    int ans=LLONG_MAX;
    for(int i=0;i<63;++i)
    {
        for(int j=0;j<63;++j)
        {
            if((x>>i)==(y>>j))ans=min(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    memset(dp,0x3F,sizeof(dp));
    dp[0][0]=0;
    for(int k=1;k<63;++k)
    {
        for(int i=62;~i;--i)
        {
            for(int j=62;~j;--j)
            {
                if(i>=k)dp[i][j]=min(dp[i][j],dp[i-k][j]+(1LL<<k));
                if(j>=k)dp[i][j]=min(dp[i][j],dp[i][j-k]+(1LL<<k));
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}