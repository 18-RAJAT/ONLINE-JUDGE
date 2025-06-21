#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=1e9+7,N=1e5;
int fact[N+5],inv[N+5];
int ModP(int a,int b)
{
    int r=1;
    a%=Mod;
    while(b)
    {
        if(b&1)r=r*a%Mod;
        a=a*a%Mod;
        b>>=1;
    }
    return r;
}
void sol()
{
    int a,b,k;
    cin>>a>>b>>k;
    int n=(a-1)*k+1;
    assert(n>=a);
    int nm=n%Mod,tmp=1,cur=nm;
    for(int i=0;i<a;++i)tmp=tmp*((cur-i)%Mod+Mod)%Mod;
    int chk=tmp*inv[a]%Mod,m=((b-1)%Mod*k%Mod)%Mod;
    m=m*chk%Mod,m=(m+1)%Mod;
    cout<<nm<<" "<<m<<endl;
}
signed main()
{
    for(int i=fact[0]=1;i<=N;++i)fact[i]=fact[i-1]*i%Mod;
    inv[N]=ModP(fact[N],Mod-2);
    for(int i=N;i;--i)inv[i-1]=inv[i]*i%Mod;
    assert(fact[0]==1);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}