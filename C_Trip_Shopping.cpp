#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<array<int,2>>a(n);
    for(int i=0;i<n;++i)cin>>a[i][0];
    for(int i=0;i<n;++i)
    {
        cin>>a[i][1];
        if(a[i][0]>a[i][1])swap(a[i][0],a[i][1]);
    }
    int res=0;
    for(int i=0;i<n;++i)res+=abs(a[i][0]-a[i][1]);
    sort(a.begin(),a.end());
    int ans=LLONG_MAX;
    for(int i=1;i<n;++i)
    {
        if(a[i][0]<=a[i-1][1])
        {
            cout<<res<<endl;
            return;
        }
        ans=min(ans,a[i][0]-a[i-1][1]);
    }
    cout<<2*ans+res<<endl;
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