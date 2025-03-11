#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353;
int power(int a,int b,int m=Mod)
{
    int res=1%Mod;
    a%=Mod;
    while(b)
    {
        if(b&1)res=res*a%Mod;
        a=a*a%Mod;
        b>>=1;
    }
    return res;
}
void sol()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int cnt=0;
    for(auto& it:s)cnt+=(it=='1');
    int p=power(2,n),inv=power(16,Mod-2),f=p*inv%Mod,v=(n*n+n-2+Mod)%Mod;
    while(q--)
    {
        int i;
        cin>>i;
        i--;
        cnt+=(s[i]=='0'?1:-1);
        s[i]^=1;
        int ans=(4*cnt%Mod*cnt%Mod-4*cnt%Mod*n%Mod+v+Mod)%Mod;
        cout<<ans*f%Mod<<endl;
    }
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