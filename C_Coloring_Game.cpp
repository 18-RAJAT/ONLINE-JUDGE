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
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            int tot=a[i]+a[j];
            int LB=lower_bound(a.begin(),a.end(),tot)-a.begin();
            int UB=upper_bound(a.begin(),a.end(),a[n-1]-tot)-a.begin();
            UB=max(UB,j+1);
            ans+=max(LB-UB,0LL);
        }
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