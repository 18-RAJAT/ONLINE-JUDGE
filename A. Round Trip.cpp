#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int r0,x,d,n;
    cin>>r0>>x>>d>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        (s[i]=='2' && r0<x)?ans++,r0-=d:ans++,r0-=d;
    }
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