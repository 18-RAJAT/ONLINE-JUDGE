#include"bits/stdc++.h"
using namespace std;
#define int long long
#define ld long double
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+5),b(n+5);
    for(int i=1;i<=n;++i)cin>>a[i]>>b[i];
    ld ans=0;
    for(int i=n;i>=1;--i)
    {
        ld res=ans,tot=a[i]+((100-b[i])/100.0)*ans;
        if(res<tot)ans=tot;
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
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