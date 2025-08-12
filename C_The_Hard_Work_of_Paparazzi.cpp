#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int r,n;
    cin>>r>>n;
    vector<pair<int,pair<int,int>>>a(n);
    for(int i=0;i<n;++i)
    {
        int t,x,y;
        cin>>t>>x>>y;
        a[i]={t,{x,y}};
    }
    a.insert(a.begin(),{0,{1,1}});
    vector<int>dp(n+1,-1e15);
    dp[0]=0;
    for(int i=1;i<=n;++i)
    {
        for(int j=max(0LL,i-2*r);j<i;++j)
        {
            int tmp=abs(a[i].second.first-a[j].second.first)+abs(a[i].second.second-a[j].second.second);
            if(a[j].first+tmp<=a[i].first)dp[i]=max(dp[i],dp[j]+1);
        }
    }
    cout<<*max_element(dp.begin(),dp.end());
}
signed main()
{
    sol();
    return 0;
}