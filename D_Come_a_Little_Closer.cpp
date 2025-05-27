#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i]>>b[i];
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    vector<int>PrefMn(n),PrefMx(n),DpMn(n),DpMx(n);
    vector<int>SufMn(n),SufMx(n),NDpMn(n),NDpMx(n);
    PrefMn[0]=a[0];
    PrefMx[0]=a[0];
    DpMn[0]=b[0];
    DpMx[0]=b[0];
    for(int i=1;i<n;++i)
    {
        PrefMn[i]=min(PrefMn[i-1],a[i]);
        PrefMx[i]=max(PrefMx[i-1],a[i]);
        DpMn[i]=min(DpMn[i-1],b[i]);
        DpMx[i]=max(DpMx[i-1],b[i]);
    }
    SufMn[n-1]=a[n-1];
    SufMx[n-1]=a[n-1];
    NDpMn[n-1]=b[n-1];
    NDpMx[n-1]=b[n-1];
    for(int i=n-2;~i;--i)
    {
        SufMn[i]=min(SufMn[i+1],a[i]);
        SufMx[i]=max(SufMx[i+1],a[i]);
        NDpMn[i]=min(NDpMn[i+1],b[i]);
        NDpMx[i]=max(NDpMx[i+1],b[i]);
    }
    int ans=LLONG_MAX,ret=n-1;
    for(int i=0;i<n;++i)
    {
        int mn1=4e18,mx1=-4e18,mn2=4e18,mx2=-4e18;
        if(i>0)
        {
            mn1=min(mn1,PrefMn[i-1]);
            mx1=max(mx1,PrefMx[i-1]);
            mn2=min(mn2,DpMn[i-1]);
            mx2=max(mx2,DpMx[i-1]);
        }
        if(i+1<n)
        {
            mn1=min(mn1,SufMn[i+1]);
            mx1=max(mx1,SufMx[i+1]);
            mn2=min(mn2,NDpMn[i+1]);
            mx2=max(mx2,NDpMx[i+1]);
        }
        int x=mx1-mn1+1,y=mx2-mn2+1,tot=x*y,res;
        (ret<tot)?res=tot:res=ret+min(x,y);
        ans=min(ans,res);
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