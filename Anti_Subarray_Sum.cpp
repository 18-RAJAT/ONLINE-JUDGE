#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5,M=-(1LL<<62);
int a[N],b[N];
void sol()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i)cin>>b[i];
    int dp=0,dp1=M,ndp=M,ndp1=M;
    int pdp=0,pdp1=M,pndp=M,pndp1=M;
    int p=M,p0=M,p1=M,ans=M,ans1=M;
    for(int i=1;i<=n;++i)
    {
        if(i>=3)
        {
            p=max({p,pdp,pdp1,pndp,pndp1});
            p0=max({p0,pdp,pndp});
            p1=max({p1,pdp1,pndp1});
        }
        int x1,y1,x2,y2;
        if(b[i]==0)x1=a[i]+max(dp,0LL),y1=(dp1>M?a[i]+dp1:M);
        else x1=M,y1=a[i]+max({dp,dp1,0LL});
        // cout<<x1<<" "<<x2<<endl;
        if(b[i]==0)x2=a[i]+max(ndp,p0),y2=a[i]+max(ndp1,p1);
        else x2=M,y2=a[i]+max({ndp,ndp1,p});
        // cout<<x1<<" "<<x2<<endl;
        ans=max({ans,x2,y2}),ans1=max(ans1,y2);
        pdp=dp,dp=x1,pdp1=dp1,dp1=y1;
        pndp=ndp,ndp=x2,pndp1=ndp1,ndp1=y2;
    }
    cout<<(x<=ans?0:x-ans1)<<endl;
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