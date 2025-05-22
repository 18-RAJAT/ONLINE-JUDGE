#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353,N=200005;
vector<int>f(N+5);
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1,res=1;
    for(int i=1;i<n;++i)
    {
        if(s[i]!=s[i-1])res++;
        else
        {
            ans=(ans*f[res])%Mod,res=1;
        }
    }
    ans=(ans*f[res])%Mod;
    cout<<ans<<endl;
}
signed main()
{
    for(int i=0;i<=3;++i)f[i]=1;
    for(int i=4;i<=N;++i)
    {
        f[i]=f[i-1]+f[i-3];
        if(f[i]>=Mod)f[i]-=Mod;
    }
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}