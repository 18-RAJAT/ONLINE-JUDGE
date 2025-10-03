#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1000000007;
void sol()
{
    int m;
    cin>>m;
    vector<int>dp(m+1);
    dp[1]=1;
    for(int i=1;i<=m;++i)
    {
        for(int k=2;k*i<=m;++k)dp[k*i]-=dp[i];
    }
    auto ModP=[&](int a,int e)
    {
        int r=1%N;
        a%=N;
        while(e)
        {
            if(e&1)r=(r*a)%N;
            a=(a*a)%N;
            e>>=1;
        }
        return r;
    };
    int ans=1;
    for(int i=2;i<=m;++i)
    {
        if(dp[i]==0)continue;
        int tmp=dp[i]%N;
        if(tmp<0)tmp+=N;
        int q=(m/i)%N,d=(m-(m/i))%N;
        int inv=ModP(d,N-2),res=((tmp*q)%N*inv)%N;
        ans=(ans-res)%N;
    }
    ans=(ans%N+N)%N;
    cout<<ans;
}
signed main()
{
   sol();
   return 0;
}