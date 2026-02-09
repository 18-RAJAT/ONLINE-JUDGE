#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,w;
    cin>>n>>w;
    cout<<n-(n/w)<<endl;
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