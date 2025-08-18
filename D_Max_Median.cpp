#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    auto recur=[&](int mid)
    {
        vector<int>b(n);
        for(int i=0;i<n;++i)
        {
            if(i)b[i]=b[i-1];
            b[i]+=(a[i]>=mid?1:-1);
        }
        int mx=b[k-1],mn=0;
        for(int i=k;i<n;++i)
        {
            mn=min(mn,b[i-k]),mx=max(mx,b[i]-mn);
        }
        return mx>=1;
    };
    int l=1,r=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        (recur(mid))?l=mid+1:r=mid-1;
    }
    cout<<l-1<<endl;
}
signed main()
{
    sol();
    return 0;
}