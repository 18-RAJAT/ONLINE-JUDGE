#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e18
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)cin>>b[i];
    sort(b.begin(),b.end());
    int ans=-N,ok=1;
    for(int i=0;i<n;++i)
    {
        int res=N;
        if(ans<=a[i])res=a[i];
        int id=distance(b.begin(),lower_bound(b.begin(),b.end(),ans+a[i]));
        if(id<m)res=min(res,b[id]-a[i]);
        if(res==N)
        {
            ok=0;
            break;
        }
        ans=res;
    }
    cout<<(ok?"YES":"NO")<<endl;
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