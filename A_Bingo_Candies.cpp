#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n*n);
    int mx=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            int x;
            cin>>x;
            a[x]++;
            mx=max(mx,a[x]);
        }
    }
    cout<<((mx<=n*(n-1))?"YES":"NO")<<endl;
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