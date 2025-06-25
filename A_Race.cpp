#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,y,a;
    cin>>a>>x>>y;
    if(y<x)swap(x,y);
    if(a<x || y<a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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