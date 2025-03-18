#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=60,NN=(1ULL<<62);
void sol()
{
    int x,y;
    cin>>x>>y;
    vector<vector<int>>dp(N+1,vector<int>(N+1,NN));
    dp[0][0]=0;
    for(int k=1;k<=N;++k)
    {
        vector<vector<int>>ndp=dp;
        int mask=(1LL<<k);
        for(int i=0;i<=N-k;++i)
        {
            for(int j=0;j<=N;++j)
            {
                if(dp[i][j]!=NN)
                {
                    int f=i+k,s=dp[i][j]|mask;
                    if(s<ndp[f][j])ndp[f][j]=s;
                }
            }
        }
        for(int i=0;i<=N;++i)
        {
            for(int j=0;j<=N-k;++j)
            {
                if(dp[i][j]!=NN)
                {
                    int f=j+k,s=dp[i][j]|mask;
                    if(s<ndp[i][f])ndp[i][f]=s;
                }
            }
        }
        dp=move(ndp);
    }
    vector<array<int,2>>vp;
    vector<int>ar;
    for(int i=0;i<=N;++i)
    {
        for(int j=0;j<=N;++j)
        {
            if(dp[i][j]!=NN)
            {
                vp.push_back({i,j});
                ar.push_back(dp[i][j]);
            }
        }
    }
    int ans=NN;
    for(int i=0;i<vp.size();++i)
    {
        int f=vp[i][0],s=vp[i][1];
        // (x & ~((1LL<<f)-1))==(y & ~((1LL<<s)-1));
        if((x>>f)==(y>>s))ans=min(ans,ar[i]); //&& (x&((1LL<<f)-1))==(y&((1LL<<s)-1)))
    }
    cout<<ans<<endl;
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