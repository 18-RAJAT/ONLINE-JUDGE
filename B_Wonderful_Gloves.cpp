#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int l[n],r[n];
    int ans=0;
    for(int i=0;i<n;++i)cin>>l[i];
    for(int i=0;i<n;++i)cin>>r[i];
    for(int i=0;i<n;++i)ans+=max(l[i],r[i]),l[i]=min(l[i],r[i]);
    sort(l,l+n);
    for(int i=0;i+1<k;++i)ans+=l[n-i-1];
    cout<<ans+1<<endl;
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