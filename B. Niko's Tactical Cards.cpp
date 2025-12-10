#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    int x=0,y=0;
    for(int i=0;i<n;++i)
    {
        int nx=min({x-a[i],y-a[i],b[i]-x,b[i]-y});
        int ny=max({x-a[i],y-a[i],b[i]-x,b[i]-y});
        x=nx,y=ny;
    }
    cout<<y<<endl;
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