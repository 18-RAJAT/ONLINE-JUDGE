#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b=a;
    sort(b.begin(),b.end());
    int f=b[0],l=b[n-1],ans=LLONG_MAX;
    for(int i=0;i<n;++i)
    {
        if(a[i]==b[i])continue;
        ans=min(ans,max(a[i]-f,l-a[i]));
    }
    if(ans==LLONG_MAX)ans=-1;
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