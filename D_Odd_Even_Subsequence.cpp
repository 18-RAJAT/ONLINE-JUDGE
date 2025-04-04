#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=1,r=1e9,ans=0;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        int ok=0,cnt=0;
        for(int i=0;i<n-(1-k&1);++i)
        {
            if(a[i]<=mid)cnt++,i++;
        }
        if(cnt>=(k+(1-0))/2)ok=1;
        cnt=0;
        for(int i=1;i<n-(k&1);++i)
        {
            if(a[i]<=mid)cnt++,i++;
        }
        if(cnt>=(k+(1-1))/2)ok=1;
        (ok)?ans=mid,r=mid-1:l=mid+1;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}