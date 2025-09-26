#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0,neg=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==0)ans++;
        if(a[i]==-1)neg++;
    }
    if(neg&1)ans+=2;
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