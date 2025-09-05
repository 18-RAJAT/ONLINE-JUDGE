#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=1000000007;
int n,k;
int dp[905][905][2][2];
int ar[90005],br[900005],check[905][905];
void init()
{
    ar[0]=1;br[0]=1;
    for(int i=1;i<90000;++i)
    {
        ar[i]=ar[i-1]*k%Mod;
        br[i]=br[i-1]*(k-1)%Mod;
    }
    for(int i=0;i<900;++i)check[i][0]=check[i][i]=1;
    for(int i=1;i<900;++i)
    {
        for(int j=1;j<i;++j)
        {
            check[i][j]=(check[i-1][j-1]+check[i-1][j])%Mod;
        }
    }
}
int calc(int i,int j)
{
    int c=check[n][i]*check[n][j]%Mod;
    int p=ar[n*n-((i+j)*n-i*j)]*br[(i+j)*n-i*j]%Mod;
    return c*p%Mod;
}
void sol()
{
    cin>>n>>k;
    init();
    dp[0][0][0][0]=1;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            for(int a=0;a<2;++a)
            {
                for(int b=0;b<2;++b)
                {
                    int ways=dp[i][j][a][b];
                    if(!ways)continue;
                    if(i<n)
                    {
                        dp[i+1][j][a^1][b]=(dp[i+1][j][a^1][b]+ways)%Mod;
                    }
                    if(j<n)
                    {
                        dp[i][j+1][a][b^1]=(dp[i][j+1][a][b^1]+ways)%Mod;
                    }
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            int tmp=calc(i,j);
            if((i+j)%2==0)ans=(ans+tmp)%Mod;
            else ans=(ans-tmp+Mod)%Mod;
        }
    }
    cout<<ans%Mod;
}
signed main()
{
    sol();
    return 0;
}