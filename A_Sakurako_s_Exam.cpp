#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b;
    cin>>a>>b;
    int align=a+2*b,ans=align;
    cout<<((a%2==0 && (a!=0 || b%2==0))?"YES":"NO")<<endl;
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