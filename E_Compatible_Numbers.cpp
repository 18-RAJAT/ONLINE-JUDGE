#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=(1<<22)+5;
int dp[N];
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    queue<int>q;
    for(auto& it:a)
    {
        if(dp[it]==-1)
        {
            dp[it]=it;
            q.push(it);
        }
    }
    while(!q.empty())
    {
        int mask=q.front();
        q.pop();
        for(int i=0;i<22;++i)
        {
            int Nmask=mask|(1<<i);
            if(Nmask<N && dp[Nmask]==-1)
            {
                dp[Nmask]=dp[mask];
                q.push(Nmask);
            }
        }
    }
    for(int i=0;i<n;++i)cout<<dp[((1<<22)-1)^a[i]]<<" ";
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}