#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n),b(n),f(n),ar(n+1);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    int res=0;
    for(int i=n-1;~i;--i)
    {
        if(a[i]>res)res=a[i];
        if(b[i]>res)res=b[i];
        f[i]=res;
    }
    ar[0]=0;
    for(int i=0;i<n;++i)ar[i+1]=ar[i]+f[i];
    for(int i=0;i<q;++i)
    {
        int l,r;
        cin>>l>>r;
        cout<<((i)?" ":"")<<ar[r]-ar[l-1];
    }
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