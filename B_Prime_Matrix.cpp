#include<bits/stdc++.h>
using namespace std;
#define int long long
int prime[100105];
void sieve(int n)
{
    for(int i=1;i<=n;++i)prime[i]=1;
    prime[1]=0;
    for(int i=2;i<=n;++i)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)prime[j]=0;
        }
    }
}
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)cin>>a[i][j];
    }
    int ans=1e18;
    for(int i=0;i<n;++i)
    {
        int cnt=0;
        for(int j=0;j<m;++j)
        {
            int k=0,x=a[i][j];
            while(!prime[a[i][j]]){k++;a[i][j]++;}
            a[i][j]=x;
            cnt+=k;
        }
        ans=min(ans,cnt);
    }
    for(int j=0;j<m;++j)
    {
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            int k=0,x=a[i][j];
            while(!prime[a[i][j]]){k++;a[i][j]++;}
            a[i][j]=x;
            cnt+=k;
        }
        ans=min(ans,cnt);
    }
    cout<<ans;
}
signed main()
{
    sieve(100105);
    sol();
    return 0;
}