#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a;
    int tmp=n;
    if(tmp==0)a.push_back(0);
    while(tmp>=1)
    {
        a.push_back(tmp%10);
        tmp/=10;
    }
    int sz=a.size();
    for(int i=0;i<sz;++i)
    {
        if(a[i]==7)
        {
            cout<<0<<endl;
            return;
        }
    }
    int rem=sz+1,mx=26,ans=-1;
    for(int m=1;m<=9;++m)
    {
        int dp[rem+1][mx+1][m+1];
        memset(dp,-1,sizeof(dp));
        int s=(sz>=1?a[0]:0)+9*m;
        dp[1][s/10][m]=max(dp[1][s/10][m],(int)(s%10==7));
        // cout<<"Check->> "<<dp[1][mx][m]<<endl;
        dp[1][mx][m]=max(dp[1][mx][m],(int)(s%10==7));//chk again

        for(int i=1;i<rem;++i)
        {
            int chk=i<sz?a[i]:0;
            for(int j=0;j<mx;++j)
            {
                for(int k=0;k<=m;++k)
                {
                    if(dp[i][j][k]==-1)continue;
                    // else if(dp[i][j][k]==0)continue;
                    // else
                    // {
                    //     if(chk==0 && dp[i][j][k]==1)
                    //     {
                    //         ans=m;
                    //         break;
                    //     }
                    // }
                    int ret=dp[i][j][k];
                    for(int x=0;x<=k;++x)
                    {
                        int s=chk+9*x+j,md=s%10,div=s/10;
                        // assert(div<mx && div>=0);
                        if(div<mx)dp[i+1][div][x]=max(dp[i+1][div][x],(ret|(md==7)));
                        // else if(div==mx)dp[i+1][mx][x]=max(dp[i+1][mx][x],(ret|(md==7)));
                    }
                }
            }
        }
        for(int p=0;p<=m;++p)
        {
            if(dp[rem][0][p]==1)
            {
                ans=m;
                break;
            }
        }
        if(~ans)break;
    }
    if(ans==-1)ans=((a[0]-7)%10+10)%10;
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