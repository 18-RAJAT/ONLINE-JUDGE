#include"bits/stdc++.h"
using namespace std;
#define int long long
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
void sol()
{
    int a,b,c,n;cin>>a>>b>>c>>n;
    a=gcd(a,n);
    n/=a,b=gcd(b,n),n/=b;
    c=gcd(c,n),n/=c;
    cout<<(n==1?to_string(a-1)+" "+to_string(b-1)+" "+to_string(c-1):"-1")<<endl;
}
signed main()
{
    sol();
    return 0;
}