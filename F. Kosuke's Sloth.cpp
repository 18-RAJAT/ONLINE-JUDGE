#include"bits/stdc++.h"
using namespace std;
#define int long long
int Mod=1000000007;
void sol()
{
    int n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<n%Mod<<endl;
        return;
    }
    vector<int>dp(2*k);
    dp[1]=1,dp[2]=dp[1];
    int i=3;
    do
    {
        dp[i]=dp[i-1]+dp[i-2];
        if(dp[i]%k==0)break;
        dp[i]%=k,i++;
    }while(i<2*k);
    cout<<((n%Mod)*(i%Mod))%Mod<<endl;
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