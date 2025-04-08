#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i]>>b[i];
    int res=0,ans=LLONG_MAX;
    for(int i=0;i<n;++i)
    {
        int idx=(i+1)%n,ele=min(a[idx],b[i]);
        res+=a[idx]-ele,ans=min(ans,ele);
    }
    cout<<res+ans<<endl;
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