#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,h,k;
    cin>>n>>h>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int sum=0;
    for(int i=0;i<n;++i)sum+=a[i];
    vector<int>ar(n+5,0);
    for(int i=0;i<n;++i)ar[i+1]=ar[i]+a[i];
    vector<int>mn(n),mx(n);
    mn[0]=a[0];
    for(int i=1;i<n;++i)mn[i]=min(mn[i-1],a[i]);
    mx[n-1]=a[n-1];
    for(int i=n-2;~i;--i)mx[i]=max(mx[i+1],a[i]);
    int ans=LLONG_MAX;
    for(int i=1;i<=n;++i)
    {
        int tmp=ar[i];
        if(i<n)
        {
            int rem=mx[i]-mn[i-1];
            if(rem>=1)tmp+=rem;
        }
        int x=0;
        if(tmp<h)x=(h-tmp+sum-1)/sum;
        ans=min(ans,x*(n+k)+i);
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