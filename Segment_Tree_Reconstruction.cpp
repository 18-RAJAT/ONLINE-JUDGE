#include<bits/stdc++.h>
using namespace std;
#define int long long
void recur(int n,int k,int l,int r,vector<char>& s)
{
    if(n==0)
    {
        s[l]=(k==1?'1':'0');
        return;
    }
    //msk:2e4-1=16->>> 1<<(4)-1=16-1=15....
    int m1=(1ll<<n)-1,m2=(1ll<<(n+1))-1,x,y;
    if(k==m2)
    {
        for(int i=l;i<r;++i)s[i]='1';
        return;
    }
    // for(int i=l;i<l+(1ll<<n-1);++i)s[i]='1';
    if(k<=m1-n)
    {
        x=k,y=0;
    }
    else if(k>=m1)
    {
        x=m1,y=k-m1;
    }
    else
    {
        x=m1-n,y=k-m1+n;
    }
    int mid=(l+r)>>1;
    recur(n-1,x,l,mid,s);
    recur(n-1,y,mid,r,s);
}
void sol()
{
    int n,k;
    cin>>n>>k;
    int m=(1ll<<(n+1))-1;
    if(k<=m-(n+1) || k==m)
    {
        cout<<"Yes"<<endl;
        int l=1<<n;
        // cout<<l<<endl;
        vector<char>ar(l,'0');
        recur(n,k,0,l,ar);
        for(int i=0;i<l;++i)cout<<ar[i];
        cout<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
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