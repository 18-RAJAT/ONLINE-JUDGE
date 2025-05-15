#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=1;
    for(int i=0;i<n;++i)
    {
        int chk=a[i]-i;
        if(chk<=0)
        {
            cout<<0<<endl;
            return;
        }
        ans=(ans*chk)%998244353;
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