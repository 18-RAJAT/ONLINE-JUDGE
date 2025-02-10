#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e18
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int x;
    cin>>x;
    int dp=a[0],ndp=x-a[0];
    for(int i=1;i<n;++i)
    {
        int cur=a[i],val=x-a[i],mn1=N,mn2=N;
        if(dp!=N)
        {
            if(cur>=dp)mn1=min(mn1,cur);
            if(val>=dp)mn2=min(mn2,val);
        }
        if(ndp!=N)
        {
            if(cur>=ndp)mn1=min(mn1,cur);
            if(val>=ndp)mn2=min(mn2,val);
        }
        // else mn1=min(mn1,cur),mn2=min(mn2,val);
        dp=mn1,ndp=mn2;
    }
    cout<<(dp!=N || ndp!=N?"YES":"NO")<<endl;
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