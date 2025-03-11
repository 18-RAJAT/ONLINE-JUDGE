#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1);
    if(k&1)for(int i=1;i<=n-2;++i)a[i]=n;
    else for(int i=1;i<=n-2;++i)a[i]=n-1;
    a[n-1]=n,a[n]=n-1;
    for(int i=1;i<=n;++i)cout<<a[i]<<(i==n?"\n":" ");
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