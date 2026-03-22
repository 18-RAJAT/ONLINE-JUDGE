#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    pair<int,int>a[n];
    int l=0,r=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i].first>>a[i].second;
        l+=a[i].first;
        r+=a[i].second;
    }
    int l1=l,r1=r,ans=0;
    for(int i=0;i<n;++i)
    {
        int x=l,y=r;
        l=l-a[i].first+a[i].second;
        r=r-a[i].second+a[i].first;
        if(abs(l-r)>abs(r1-l1))
        {
            ans=i+1,l1=l,r1=r;
        }
        l=x,r=y;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}