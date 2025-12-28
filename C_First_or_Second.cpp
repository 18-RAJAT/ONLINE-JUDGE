#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+5);
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int res=0;
    res+=a[1];
    int tmp=a[1]+res,ans=res-sum,ok=0;
    for(int i=2;i<=n;++i)
    {
        ok=tmp-res;
        res+=a[i];
        ans=max(ans,ok-(sum-res));
        tmp=max(tmp,ok+a[i]+res);
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