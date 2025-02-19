#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=1;
    for(int i=0;i<n;++i)
    {
        if(a[i]==-1)
        {
            int res=max(0ll,a[i+1]-a[i-1]-1);
            ans*=res,ans%=1000000007;
        }
    }
    for(int i=1;i<n;++i)
    {
        if(~a[i-1] && ~a[i] && a[i]<=a[i-1])ans=0;
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