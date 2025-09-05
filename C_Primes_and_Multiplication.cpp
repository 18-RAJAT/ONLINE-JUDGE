#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=1000000007;
int ModPow(int a,int b)
{
    int r=1;
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
    int x,n;
    cin>>x>>n;
    vector<int>ar;
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
            ar.push_back(i);
            while(x%i==0)x/=i;
        }
    }
    if(x>=2)ar.push_back(x);
    int ans=1;
    for(auto& it:ar)
    {
        int cur=it,e=0;
        while(cur<=n)
        {
            e+=n/cur;
            if(n/it<cur)break;
            cur*=it;
        }
        ans=ans*ModPow(it,e)%Mod;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}