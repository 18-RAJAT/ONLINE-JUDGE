#include<bits/stdc++.h>
using namespace std;
#define int long long
int f1(int x,int t)
{
    for(int i=0;i<t && x>=1;++i){x/=2;}
    return x;
}
int f2(int x,int t)
{
    for(int i=0;i<t && x>=2;++i){x++;x/=2;}
    return x;
}
void sol()
{
    int x,n,m;
    cin>>x>>n>>m;
    cout<<f1(f2(x,m),n)<<" "<<f2(f1(x,n),m)<<endl;
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