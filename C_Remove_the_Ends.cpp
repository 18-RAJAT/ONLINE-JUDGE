#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]<0)sum+=-a[i];
    }
    int ans=sum,s=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]>0)
        {
            s+=a[i];
            ans=max(ans,s+sum);
        }
        else sum-=-a[i];
    }
    cout<<ans<<endl;
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