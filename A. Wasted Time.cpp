#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    long double x,y,px,py,res=0;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y;
        if(i)res+=sqrt((py-y)*(py-y)+(px-x)*(px-x));
        px=x,py=y;
    }
    cout<<setprecision(15)<<(res*k)/50.0;
}
signed main()
{
    sol();
   return 0;
}