#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e18;
void sol()
{
   int n,k;
   cin>>n>>k;
   vector<vector<int>>a(n,vector<int>(n+1));
   for(int i=0;i<n;++i)
   {
      for(int j=1;j<=n;++j)
      {
         int x;
         cin>>x;
         a[i][j]=a[i][j-1]+x;
      }
   }
   vector<vector<int>>dp(n+1,vector<int>(k+1,INF));
   dp[0][0]=0;
   for(int i=1;i<=n;++i)
   {
      for(int x=1;x<=k;++x)
      {
         int res=0;
         for(int j=i;j>=1;--j)
         {
            res+=a[j-1][i]-a[j-1][j-1];
            dp[i][x]=min(dp[i][x],dp[j-1][x-1]+res);
         }
      }
   }
   cout<<dp[n][k];
}
signed main()
{
   sol();
   return 0;
}