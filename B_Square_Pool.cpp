#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,s;
    cin>>n>>s;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        int x1=(dx==1)?(s-x):x,x2=(dy==1)?(s-y):y;
        if(x1==x2)ans++;
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