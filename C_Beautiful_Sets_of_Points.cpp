#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int mn=min(n,m);
    cout<<1+mn<<endl;
    for(int i=0;i<=mn;++i)cout<<i<<" "<<mn-i<<endl;
}
signed main()
{
    sol();
    return 0;
}