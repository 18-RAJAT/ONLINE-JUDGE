#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353,N=2000005;
int f[N],inv[N];

//Rajat joshi template
int ModP(int x,int e)
{
    int r=1;
    while(e)
    {
        if(e&1)r=r*x%Mod;
        x=x*x%Mod;
        e>>=1;
    }
    return r;
}
int comb(int n,int k)
{
    if(k<0 || k>n)return 0;
    return f[n]*inv[k]%Mod*inv[n-k]%Mod;
}
void check()
{
    f[0]=1;
    for(int i=1;i<N;++i)f[i]=f[i-1]*i%Mod;
    inv[N-1]=ModP(f[N-1],Mod-2);
    for(int i=N-1;i>=1;--i)inv[i-1]=inv[i]*i%Mod;
}
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+5);
    for(int i=1;i<=n;++i)cin>>a[i];
    int tot=0;
    for(int i=1;i<=n;++i)tot+=a[i];
    if(tot!=n)
    {
        cout<<0<<endl;
        return;
    }
    int r=(n+1)/2;
    //[r+1....n]->after mid then suf cell then red..
    for(int i=r+1;i<=n;++i)
    {
        if(a[i]!=0)
        {
            cout<<0<<endl;
            return;
        }
    }
    vector<int>ar(n+5);
    for(int i=n;i>=1;--i)ar[i]=ar[i+1]+a[i];
    int ans=1;
    for(int i=r;i>=1;--i)
    {
        int x=(n+2)-(i<<1),y=ar[i+1],m=x-y;
        if(m<0 || m<a[i])
        {
            cout<<0<<endl;
            return;
        }
        ans=ans*comb(m,a[i])%Mod;
    }
    cout<<ans<<endl;
}
signed main()
{
    check();
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}