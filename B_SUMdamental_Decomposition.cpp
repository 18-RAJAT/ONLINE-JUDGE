#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    if(n==1)
    {
        cout<<((x==0)?-1:x)<<endl;
        return;
    }
    int bit=__builtin_popcountll(x);
    int chk=bit<n?(n-bit):0,res=(chk+1)/2,ans=0;
    for(int i=0;i<32 && res>=1;++i)
    {
        int tmp=(x>>i)&1?((n-1)>>1):(n>>1);
        if(tmp<=0)continue;
        // cout<<(x>>i)<<" "<<tmp<<" "<<res<<endl;
        int mn=min(tmp,res);
        // cout<<(1LL<<(i+1))<<" ";
        ans+=mn*(2LL<<i),res-=mn;
    }
    cout<<ans+x<<endl;
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