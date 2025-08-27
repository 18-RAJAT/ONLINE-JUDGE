#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<(a<=b?(n%2==b%2?"YES":"NO"):(n%2==b%2 && b%2==a%2?"YES":"NO"))<<endl;
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