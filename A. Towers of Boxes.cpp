#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,d;
    cin>>n>>m>>d;
    int k=d/m+1;
    cout<<(n+k-1)/k<<endl;
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