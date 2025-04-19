#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(31);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        for(int j=0;j<31;++j)b[j]+=a[i]>>j&1;
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        int chk=0;
        for(int j=0;j<31;++j)chk+=(1LL<<j)*(a[i]>>j&1?n-b[j]:b[j]);
        ans=max(ans,chk);
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