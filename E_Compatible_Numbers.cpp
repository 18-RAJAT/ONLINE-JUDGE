#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=(1<<22)+2;
int dp[N];
void recur(int mask,int val)
{
    if(mask>=N)return;
    if(~dp[mask])return;
    dp[mask]=val;
    for(int i=0;i<22;++i)recur((mask|(1<<i)),val);
}
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    for(auto& it:a)recur(it,it);
    for(int i=0;i<n;++i)cout<<dp[(~a[i])&((1<<22)-1)]<<" ";
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}