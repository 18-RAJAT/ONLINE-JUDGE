#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int ans=0;
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=1;i<n;i+=2)
    {
        ans=max(ans,abs(a[i]-a[i-1]));
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