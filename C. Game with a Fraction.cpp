#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int p,q;
    cin>>p>>q;
    if(q<=p)
    {
        cout<<"Alice"<<endl;
        return;
    }
    int n=q-p,x=n*2,y=n*3;
    if(x<=p && y<=q)
    {
        cout<<"Bob"<<endl;
        return;
    }
    cout<<"Alice"<<endl;
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