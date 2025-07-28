#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;++i)ans+=n-i;
    for(int i=0;i<n-1;++i)
    {
        if(a[i+1]<a[i])ans+=(i+1)*(n-i-1);
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