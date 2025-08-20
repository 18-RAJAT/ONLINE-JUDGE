#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int res=(n-1)%k+1,l=0,r=1e9+5;
    while(r-l>=2)
    {
        int mid=(l+r)/2;
        vector<int>ar(n);
        for(int i=0;i<n;++i)ar[i]=(a[i]>=mid?1:-1);
        vector<int>dp(res,-n);
        for(int i=0;i<n;++i)
        {
            if(i%k==0)dp[0]=max(ar[i],dp[0]);
            else dp[i%k]=max(ar[i]+dp[(i-1)%k],dp[i%k]);
        }
        (dp[res-1]>=1?l=mid:r=mid);
    }
    cout<<l<<endl;
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