#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    for(int i=0;i<(1<<n);++i)
    {
        int sum=0,mx=INT_MIN,mn=INT_MAX;
        int ok=0;
        for(int j=0;j<n;++j)
        {
            if(i&(1<<j))
            {
                ok++;
                sum+=a[j];
                mx=max(mx,a[j]),mn=min(mn,a[j]);
            }
        }
        if(ok>=2 && sum>=l && sum<=r && (mx-mn)>=x)ans++;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}