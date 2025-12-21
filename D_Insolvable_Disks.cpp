#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0,l=0,r=1e9+7;
    for(int i=1;i<n;++i)
    {
        int l1=max(0LL,a[i]-(a[i-1]+r)),r1=max(0LL,a[i]-(a[i-1]+l));
        (r1<=l1)?(l=0,r=a[i]-a[i-1]):(l=l1,r=r1,ans++);
    }
    cout<<ans<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}