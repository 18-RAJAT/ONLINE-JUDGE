#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    long double pi=3.141592653589793,ans=0;
    for(int i=0;i<n;i+=2)
    {
        ans+=a[i]*a[i];
        if(i+1<n)ans-=a[i+1]*a[i+1];
    }
    cout<<fixed<<setprecision(10)<<ans*pi;
}
signed main()
{
    sol();
    return 0;
}