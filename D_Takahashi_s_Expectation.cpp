#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=505;
void sol()
{
    int n;
    cin>>n;
    vector<int>p(n+1),a(n+1),b(n+1);
    for(int i=1;i<=n;++i)cin>>p[i]>>a[i]>>b[i];
    vector<int>chk(n+1);
    for(int i=1;i<=n;++i)chk[i]=chk[i-1]+b[i];
    vector<array<int,N+1>>ar(n+1),br(n+1);
    for(int i=0;i<=n;++i)
    {
        for(int j=1;j<=N;++j)
        {
            int y=N+j;
            auto it=lower_bound(chk.begin()+i+1,chk.end(),chk[i]+j);
            if(it==chk.end())
            {
                ar[i][j]=n+1;
                br[i][j]=y-(chk[n]-chk[i]);
            }
            else
            {
                int t=it-chk.begin();
                ar[i][j]=t+1;
                br[i][j]=y-(chk[t]-chk[i]);
            }
        }
    }
    vector<array<int,N+1>>dp(n+5);
    for(int i=0;i<=N;++i)dp[n+1][i]=i;
    for(int i=n;i>=1;--i)
    {
        for(int x=0;x<=N;++x)
        {
            if(x<=p[i])
            {
                int y=x+a[i];
                if(y<=N)dp[i][x]=dp[i+1][y];
                else
                {
                    int s=y-N,ert=ar[i][s],tmp=br[i][s];
                    dp[i][x]=(ert==n+1?tmp:dp[ert][tmp]);
                }
            }
            else
            {
                int y=x-b[i];
                if(y<0)y=0;
                dp[i][x]=dp[i+1][y];
            }
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x<=N)cout<<dp[1][x]<<endl;
        else
        {
            auto it=lower_bound(chk.begin(),chk.end(),x-N);
            if(it==chk.end())cout<<x-chk[n]<<endl;
            else
            {
                int k=it-chk.begin(),y=x-chk[k];
                cout<<dp[k+1][y]<<endl;
            }
        }
    }
}
signed main()
{
    sol();
    return 0;
}