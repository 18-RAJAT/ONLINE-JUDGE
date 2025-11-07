#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int l=2e9,r=-2e9;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        l=min(l,x);
        r=max(r,x);
    }
    int x;
    cin>>x;
    cout<<((l<=x && x<=r)?"YES":"NO")<<endl;
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