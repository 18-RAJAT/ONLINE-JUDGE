#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=1;i<=n;++i)
    {
        cin>>z;
        if(i==1)x=z;
        if(i==n)y=z;
    }
    cout<<((x==0 && y==0)?"Bob":"Alice")<<endl;
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