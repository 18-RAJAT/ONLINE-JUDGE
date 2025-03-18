#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;++i)cin>>a[i];
    vector<int>b(m),c(m);
    for(int i=0;i<m;++i)b[i]=min<int>(a[i],n-1),c[i]=max<int>(1,n-a[i]);
    vector<int>ar=b;
    ranges::sort(ar);
    vector<int>suf(m+1);
    for(int i=m-1;~i;--i)suf[i]=suf[i+1]+ar[i];
    int ans=0;
    for(int i=0;i<m;++i)
    {
        int x=c[i],LB=ranges::lower_bound(ar,x)-ar.begin(),cnt=m-LB;
        int tot=cnt?suf[LB]-cnt*x+cnt:0;
        ans+=tot-(b[i]>=x?b[i]-x+1:0);
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