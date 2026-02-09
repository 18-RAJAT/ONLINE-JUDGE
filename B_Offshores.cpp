#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    int res=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        res+=a[i]/x;
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        int cur=a[i]+y*(res-a[i]/x);
        if(ans<cur)ans=cur;
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