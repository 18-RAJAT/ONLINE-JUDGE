#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b(k);
    for(int i=0;i<k;++i)cin>>b[i];
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    int ans=0,ok=-1;
    for(int i=0;i<n;++i)ans+=a[i];
    for(int i=0;i<k;++i)
    {
        if(ok+b[i]>=n)break;
        ans-=a[ok+b[i]];
        ok+=b[i];
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