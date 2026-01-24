#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    if((n&(n-1))==0)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int>a(n+5,0);
    if(n&1)
    {
        a[1]=n-1;
        for(int i=n-2;i>=2;--i)a[i]=i^1;
        a[n-1]=1,a[n]=n;
    }
    else
    {
        int bt=1LL<<__builtin_ctzll(n);
        a[n-1]=1,a[n]=n-2,a[bt]=n,a[1]=(bt^1);
        for(int i=2;i<=n-2;++i)
        {
            if(i==bt)continue;
            a[i]=(i^1);
        }
    }
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