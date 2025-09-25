#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>x(2*n);
    for(int i=0;i<2*n;++i)cin>>x[i];
    int m=2*n-1;
    vector<int>a(n+5),ar(n+5),b(n+5),br(n+5),c(n+5),cr(n+5),d(n+5),dr(n+5);
    for(int j=0;j<m;++j)
    {
        int i=j+1,k=min(i,2*n-i),y=x[j+1]-x[j];
        a[k]+=y;
        (k%2?ar[k]:b[k])+=y;
        // cout<<a[y]<<" "<<k*y<<endl;
        br[k]+=k*y;
    }
    for(int i=n;i>=1;--i)
    {
        c[i]=a[i]+c[i+1];
        cr[i]=ar[i]+cr[i+1];
        d[i]=b[i]+d[i+1];
        dr[i]=br[i]+dr[i+1];
    }
    for(int i=1;i<=n;++i)dr[i]=dr[i-1]+br[i];
    for(int i=1;i<=n;++i)
    {
        int ans=dr[i]+i*c[i+1]-((i%2==0)?cr[i+1]:d[i+1]);
        cout<<ans<<string(i==n?1:1," \n"[i==n]);
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