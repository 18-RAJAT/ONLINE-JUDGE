#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int m1=min(a,n-a+1),m2=min(b,m-b+1),x=0,y=0;

    int ok=63-__builtin_clzll(m1);
    x+=((1LL<<ok)==m1?ok:ok+1);

    ok=63-__builtin_clzll(m2);
    y+=((1LL<<ok)==m2?ok:ok+1);

    ok=63-__builtin_clzll(n);
    y+=((1LL<<ok)==n?ok:ok+1);

    ok=63-__builtin_clzll(m);
    x+=((1LL<<ok)==m?ok:ok+1);

    int ans=min(x,y);
    cout<<ans+1<<endl;
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