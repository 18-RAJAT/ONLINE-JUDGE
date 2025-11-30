#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,y,r;
    cin>>n>>y>>r;
    cout<<min(n,y/2+r)<<endl;
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