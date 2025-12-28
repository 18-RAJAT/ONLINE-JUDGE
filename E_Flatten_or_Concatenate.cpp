#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    auto ask=[&](int l,int r)
    {
        cout<<"? "<<l<<" "<<r<<endl;
        cout.flush();
        int x;
        cin>>x;
        if(x==-1)exit(0);
        return x;
    };
    int L=1,R=n,cur=ask(1,n);
    while(L<R)
    {
        int res=cur/2,lo=L,hi=R;
        while(lo<hi)
        {
            int mid=(lo+hi)/2,ret=ask(L,mid);
            (res<=ret)?hi=mid:lo=mid+1;
        }
        int l=lo-L+1,r=R-lo;
        (l<=r)?R=lo:L=lo+1;
        cur=res;
    }
    cout<<"! "<<cur<<endl;
    cout.flush();
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