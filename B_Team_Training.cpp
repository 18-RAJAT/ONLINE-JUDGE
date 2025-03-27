#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int ans=0,cnt=0;
    for(int i=0;i<n;++i)
    {
        cnt++;
        if(a[i]*cnt>=x)ans++,cnt=0;
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