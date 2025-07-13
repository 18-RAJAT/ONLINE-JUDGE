#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>ans(n);
    for(int i=0;i<n;++i)
    {
        ans[i]=a[n-i-1];
        if(i<n/2)ans[i]=ans[i]*-1;
    }
    for(int i=0;i<n;++i)cout<<ans[i]<<" ";
    cout<<endl;
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