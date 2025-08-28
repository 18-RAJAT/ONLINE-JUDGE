#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    a.resize(n+1,0);
    int ans=0;
    for(int i=1;i<n;i+=2)
    {
        int s=a[i-1]+a[i+1];
        if(s<=a[i])continue;
        int res=s-a[i];
        ans+=res;
        int x=min(a[i+1],res);
        a[i+1]-=x,res-=x,a[i-1]-=res;
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