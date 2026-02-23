#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int x,y;
    cin>>x>>y;
    if(y<0)y=-2*y;
    cout<<(x>=2*y && (x-2*y)%3==0?"YES":"NO")<<endl;
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