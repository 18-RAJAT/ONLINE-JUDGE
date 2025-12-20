#include"bits/stdc++.h"
using namespace std;
#define int long long
int dp[36][2][2],ndp[36][2][2];
int ret;
int recur(int x,int y,int z)
{
    if(x<0)return 0;
    if(ndp[x][y][z])return dp[x][y][z];
    ndp[x][y][z]=1;
    //Range is [0,1] & for x=0, we have 0 & for x=1, we have 1 ->> dp[1][0][0]=0,dp[1][1][1]=1.
    //i(0),j(1) - i+j=1 > (1<<x)=2 > 2*1=2 > 2+recur(x-1,ny,nz)nxt range.
    int res=-(1LL<<60),msk=(ret>>x)&1;
    for(int i=0;i<=1;++i)
    {
        int j=msk^i;
        if((y==0 && msk<i) || (z==0 && j>msk))continue;
        int ny=y,nz=z;
        if(y==0 && i<msk)ny=1;
        if(z==0 && j<msk)nz=1;
        // cout<<x<<" "<<y<<" "<<z<<" "<<i<<" "<<j<<" "<<ny<<" "<<nz<<endl;
        // int msk=(y<<1)|z;
        int tot=(i+j)*(1LL<<x),val=tot+recur(x-1,ny,nz);//|msk;
        if(res<val)res=val;
    }
    dp[x][y][z]=res;
    return res;
}
int func()
{
    int a=0,b=0,c=0;
    for(int x=35;~x;--x)
    {
        int x1=(ret>>x)&1,tp=-(1LL<<60);
        int tmp=0,t1=0,t2=0;
        for(int i=0;i<=1;++i)
        {
            int j=x1^i;
            if((b==0 && x1<i) || (c==0 && j>x1))continue;
            int x1=b,nc=c;
            if((b==0 && i<x1) || (c==0 && j<x1))x1=1,nc=1;
            // if(i || j)cout<<"Test-> "<<(((x-1|t1)<<x))<<endl;
            int tot=(i+j)*(1LL<<x),val=tot+recur(x-1,x1,nc);
            if(tp<val)tp=val,tmp=i,t1=x1,t2=nc;
        }
        if(tmp)a|=(1LL<<x);
        b=t1,c=t2;
    }
    return a;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<n<<endl;
        return;
    }
    if(k%2==1)
    {
        for(int i=0;i<k;++i)
        {
            if(i)cout<<" ";
            cout<<n;
        }
        cout<<endl;
        return;
    }
    ret=n;
    memset(ndp,0,sizeof(ndp));
    recur(35,0,0);
    int a=func(),b=n^a;
    int ans=0;
    for(int i=0;i<k-2;++i)
    {
        if(ans)cout<<" ";
        cout<<n;
        ans++;
    }
    if(ans)cout<<" ";
    cout<<a<<" "<<b<<endl;
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