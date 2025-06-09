#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    int l=0,r=0;
    for(int i=1;i<=n;++i)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            if(l==0)l=i;
            r=i;
        }
    }
    cout<<(!l || r-l<x?"YES":"NO")<<endl;
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