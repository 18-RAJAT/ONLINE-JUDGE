#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=998244353;
int pow(int a,int b)
{
    int r=1;
    a%=mod;
    while(b)
    {
        if(b&1)r=r*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return r;
}
void sol()
{
    int n,m;
    cin>>n>>m;
    int l[n],r[n],p[n];
    int res=1;
    for(int i=0;i<n;++i)
    {
        cin>>l[i]>>r[i];
        int x,y;
        cin>>x>>y;
        p[i]=x*pow(y,mod-2)%mod,res=res*(1+mod-p[i])%mod;
    }
    vector<pair<int,int>>vp;
    for(int i=0;i<n;++i)vp.push_back({r[i],i});
    sort(vp.begin(),vp.end());
    vector<int>dp(m+1);
    dp[0]=1;
    for(int i=0;i<n;++i)
    {
        int R=vp[i].first,L=l[vp[i].second];
        dp[R]=(dp[R]+dp[L-1]*p[vp[i].second]%mod*pow(1+mod-p[vp[i].second],mod-2)%mod)%mod;
    }
    cout<<dp[m]*res%mod<<endl;
}
signed main()
{
    sol();
    return 0;
}