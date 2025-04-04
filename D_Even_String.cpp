#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353,N=500005;
vector<int>f(N),Inv(N);
int Pow(int a,int b)
{
    int x=1;
    while(b)
    {
        if(b&1)x=(x*a)%Mod;
        a=(a*a)%Mod;
        b>>=1;
    }
    return x;
}
void sol()
{
    vector<int>a,b(26);
    int sum=0;
    for(int i=0;i<26;++i)cin>>b[i],sum+=b[i];
    int x=(sum+1)/2,y=sum/2;
    for(int i=0;i<26;++i)if(b[i])a.push_back(b[i]);
    vector<int>dp(x+1),ndp(x+1);
    dp[0]=1;
    for(auto& it:a)
    {
        fill(ndp.begin(),ndp.end(),0LL);
        for(int j=0;j<=x;++j)
        {
            if(dp[j])
            {
                ndp[j]=(ndp[j]+dp[j])%Mod;
                if(j+it<=x)ndp[j+it]=(ndp[j+it]+dp[j])%Mod;
            }
        }
        dp.swap(ndp);
    }
    int ans=dp[x],ret=(f[x]*f[y])%Mod;
    for(int i=0;i<26;++i)ret=(ret*Inv[b[i]])%Mod;
    cout<<(ans*ret)%Mod<<endl;
}
signed main()
{
    f[0]=1;
    for(int i=1;i<N;++i)f[i]=(f[i-1]*i)%Mod;
    Inv[N-1]=Pow(f[N-1],Mod-2);
    for(int i=N-2;~i;--i)Inv[i]=(Inv[i+1]*(i+1))%Mod;
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}