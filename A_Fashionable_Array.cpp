#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=n-1;
    for(int i=n-1;~i;--i)
    {
        if((a[0]+a[i])%2==0)
        {
            ans=min(ans,n-i-1);
            break;
        }
    }
    for(int i=0;i<n;++i)
    {
        if((a[n-1]+a[i])%2==0)
        {
            ans=min(ans,i);
            break;
        }
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