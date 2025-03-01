#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int r,c,n,p;
    cin>>r>>c>>n>>p;
    vector<vector<int>>grid(r,vector<int>(c,0));
    vector<int>ar(n+1),br(n+1);
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            int x;cin>>x;
            grid[i][j]=x;
            if(x)ar[x]=i,br[x]=j;
        }
    }
    vector<int>res(n+1,n+1);
    int dr[4]={-1,1,0,0},dc[4]={0,0,-1,1};
    for(int i=1;i<=n;++i)
    {
        int R=ar[i],C=br[i];
        for(int k=0;k<4;++k)
        {
            int nr=R+dr[k],nc=C+dc[k];
            if(nr<0 || nr>=r || nc<0 || nc>=c)continue;
            int j=grid[nr][nc];
            if(j==0)continue;
            int a=min(i,j),b=max(i,j),rem=b-a;
            res[rem]=min(res[rem],a);
        }
    }
    int ans=0;
    for(int i=1;i<=n-p;++i)
    {
        if(res[i]<=p)ans++;
    }
    for(int i=1;i<=p-1;++i)
    {
        if(res[i]<=p-i)ans++;
    }
    cout<<ans<<"/"<<(n-1)<<endl;
}
signed main()
{
    sol();
    return 0;
}