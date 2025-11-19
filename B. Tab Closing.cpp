#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<(a>=b*n || a<=b?1:2)<<endl;
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