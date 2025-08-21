#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=2e9+5,check=n-((n-1)/k)*k,ok=check/2+1;
    while(r-l>1)
    {
        int mid=(l+r)>>1;
        vector<int>dp(min(n,k),-1);
        for(int i=0;i<n;++i)
        {
            int res=a[i]>=mid,j=i%k;
            dp[j]=max(dp[j],res+(j>=1?dp[j-1]:0));
        }
        (dp[check-1]>=ok?l=mid:r=mid);
    }
    cout<<l<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}