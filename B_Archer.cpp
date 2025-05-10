#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(a/(1.0*b))/float((a/(1.0*b))+((b-a)/(1.0*b))*(c/(1.0*d)));
}
signed main()
{
    sol();
    return 0;
}