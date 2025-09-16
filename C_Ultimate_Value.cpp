#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l1=INT_MAX,l2=INT_MIN,r1=INT_MIN,r2=INT_MAX,ans=0;
    for(int i=0;i<n;++i)
    {
        if(i%2==0)
        {
            l1=min(l1,2*a[i]+(i+1));
            r2=min(r2,2*a[i]-(i+1));
            ans+=a[i];
        }
        else
        {
            l2=max(l2,2*a[i]-(i+1));
            r1=max(r1,2*a[i]+(i+1));
            ans-=a[i];
        }
    }
    int chk=n%2?n-1:n-2;
    cout<<ans+max(max(0LL,r1-l1),max(l2-r2,chk))<<endl;
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