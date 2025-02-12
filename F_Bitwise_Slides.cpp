#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=1000000007;
void sol()
{
    int n;
    cin>>n;
    int ans=0,bit=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        int Nbit=bit+x-2*(bit&x);
        mp[bit]=(mp[bit]*3+mp[Nbit]*2)%Mod;
        bit=move(Nbit);
    }
    for(auto& it:mp)ans=(ans+it.second)%Mod;
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