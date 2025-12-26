#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int sum=0;
    for(int i=0;i<n-1;++i)sum+=abs(a[i]-a[i+1]);
    int ans=sum;
    ans=min({ans,sum-abs(a[0]-a[1]),sum-abs(a[n-1]-a[n-2])});
    for(int i=1;i<n-1;++i)
    {
        int res=sum-abs(a[i]-a[i-1]);
        res-=abs(a[i]-a[i+1]),res+=abs(a[i+1]-a[i-1]);
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