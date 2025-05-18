#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=2e9;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            l=max(l,a[i]),r=min(r,a[i]+k);
        }
        else
        {
            l=max(l,a[i]+x),r=min(r,a[i]+x);
        }
    }
    int ans=r-l+1;
    if(ans<0)ans=0;
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