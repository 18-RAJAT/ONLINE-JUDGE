#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,k;
    cin>>x>>k;
    vector<int>a(x-1);
    for(int i=0;i<x;++i)
    {
        int t;
        cin>>t;
        for(int j=0;j<3-t;++j)
        {
            int m;
            cin>>m;
            a[m-1]=1;
        }
    }
    int l=0,r=0,ok=0;
    for(int i=0;i<x-1;++i)
    {
        a[i]?ok=0:(ok++,r++,l+=ok&1);
    }
    cout<<l<<" "<<r<<endl;
}
signed main()
{
    sol();
    return 0;
}