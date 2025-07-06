#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a>b)
    {
        cout<<((a^1)==b?y:-1)<<endl;
    }
    else
    {
        int ans=0;
        while(a<b)
        {
            ((a&1)==0 && y<x)?ans+=y:ans+=x;
            a++;
        }
        cout<<ans<<endl;
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