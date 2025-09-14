#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a[n],b[m];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)cin>>b[i];
    int ans=0;
    for(int i=0;i<n;++i)if(a[i]<y)ans++;
    for(int i=0;i<m;++i)if(b[i]<x)ans++;
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