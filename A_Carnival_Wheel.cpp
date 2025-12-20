#include"bits/stdc++.h"
using namespace std;
#define int long long
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
void sol()
{
    int l,a,b;
    cin>>l>>a>>b;
    int g=gcd(l,b),t=(l-1-a)/g;
    cout<<a+t*g<<endl;
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