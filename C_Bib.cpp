#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n+1),ans(n+1);
    for(int i=0;i<n;++i)cin>>a[i],a[i]--;
    for(int i=0;i<n;++i)cin>>b[i],c[b[i]]=i;
    for(int i=1;i<=n;++i)ans[i]=b[a[c[i]]];
    for(int i=1;i<=n;++i)cout<<ans[i]<<(i==n?"\n":" ");
}
signed main()
{
    sol();
    return 0;
}