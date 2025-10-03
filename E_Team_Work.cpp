#include<bits/stdc++.h>
using namespace std;
#define int long long 

int dp[5005][5005];
void sol()
{
    auto power=[&](int x,int y,int p)->int
    {
        int res=1;
        x%=p;
        if(x==0)return 0;
        while(y>0)
        {
            if(y&1)res=(res*x)%p;
            y>>=1;
            x=(x*x%p);
        }
        return res;
    };
    int n,k;
    cin>>n>>k;
    int mn=min(n,k);
    for(int i=0;i<=mn;++i)dp[0][i]=power(2,n-i,1000000007);
    for(int i=1;i<=k;++i)
    {
        int ret=(n*dp[i-1][1])%1000000007;
        dp[i][0]=ret;
        for(int j=1;j<=mn;++j)
        {
            ret=(j*dp[i-1][j]+(n-j)*dp[i-1][j+1])%1000000007;
            dp[i][j]=ret;
        }
    }
    cout<<dp[k][0];
}
signed main()
{
    sol();
    return 0;
}