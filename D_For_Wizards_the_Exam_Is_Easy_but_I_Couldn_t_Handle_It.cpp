#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;++i)cin>>a[i];
    int chk=0,L=1,R=1;
    for(int l=1;l<=n;++l)
    {
        int d=0;
        for(int r=l+1;r<=n;++r)
        {
            d+=(a[r]>a[l])-(a[r]<a[l]);
            if(d<chk)chk=d,L=l,R=r;
        }
    }
    cout<<L<<" "<<R<<endl;
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