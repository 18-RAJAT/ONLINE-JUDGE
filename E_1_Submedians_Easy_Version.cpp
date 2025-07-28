#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=3e5+5;
int a[N],check[2*N],ar[4*N],R[4*N];
int recur(int n,int k,int x,int& l,int& r)
{
    int Ok=n;
    for(int i=0;i<=n;++i)check[i]=0;
    for(int i=0;i<4*n;++i)ar[i]=R[i]=1e18;
    int mn=1e18,mx=-1;
    for(int i=1;i<=n;++i)
    {
        int b=a[i-1]>=x?1:-1;
        check[i]=check[i-1]+b;
        if(i>=k)
        {
            int j=i-k,tmp=check[j];
            if(tmp<mn || (tmp==mn && j<mx))mn=tmp,mx=j;
            int ret=tmp+Ok;
            if(ret<0 || ret>=4*n)continue;
            if(j&1)
            {
                if(R[ret]==1e18)R[ret]=j;
            }
            else
            {
                if(ar[ret]==1e18)ar[ret]=j;
            }
            if(check[i]-mn>=1)
            {
                l=mx+1,r=i;
                return 1;
            }
            int tp=check[i]+Ok;
            if(tp<0 || tp>=4*n)continue;
            int res=(i&1)?R[tp]:ar[tp];
            if(res!=1e18)
            {
                l=res+1,r=i;
                return 1;
            }
        }
    }
    return 0;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)cin>>a[i];
    int lo=1,hi=n,ok=1,L=1,R=k;
    while(lo<=hi)
    {
        int mid=(lo+hi)>>1,l,r;
        if(recur(n,k,mid,l,r))ok=mid,L=l,R=r,lo=mid+1;
        else hi=mid-1;
    }
    int l,r;
    if(recur(n,k,ok,l,r))cout<<ok<<" "<<l<<" "<<r<<endl;
    else cout<<ok<<" "<<L<<" "<<R<<endl;
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