#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<vector<int>>pref(n+1,vector<int>(k+1,-1)),suf(n+2,vector<int>(k+1,-1));
    pref[0][0]=suf[n+1][0]=0;
    for(int i=1;i<=n;++i)
    {
        pref[i][0]=0;
        for(int j=1;j<=min(i,k);++j)
        {
            pref[i][j]=pref[i-1][j];
            if(~pref[i-1][j-1])pref[i][j]=max(pref[i][j],pref[i-1][j-1]+a[i-1]);
        }
    }
    for(int i=n;i;--i)
    {
        suf[i][0]=0;
        for(int j=1;j<=min(n-i+1,k);++j)
        {
            suf[i][j]=suf[i+1][j];
            if(~suf[i+1][j-1])suf[i][j]=max(suf[i][j],suf[i+1][j-1]+a[i-1]);
        }
    }
    int ans=0;
    for(int i=1;i<=n;++i)
    {
        int tmp=a[i-1],res=-1;
        if(i==1)
        {
            if(n>1 && ~suf[2][k])res=tmp+suf[2][k];
        }
        else if(i==n)
        {
            if(~pref[n-1][k])res=tmp+pref[n-1][k];
        }
        else
        {
            for(int j=1;j<k;++j)
            {
                if(~pref[i-1][j] && ~suf[i+1][k-j])res=max(res,tmp+pref[i-1][j]+suf[i+1][k-j]);
            }
        }
        ans=max(ans,res);
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