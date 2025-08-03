#include<bits/stdc++.h>
using namespace std;
#define int long long

//Rajat joshi template
const int Mod=998244353,N=2e5+5;
int add(int a,int b){a+=b;return a>=Mod?a-Mod:a;}
int mul(int a,int b){return a*b%Mod;}
int seg[N<<2],lz[N<<2];
void build(int p,int l,int r,vector<int>& a)
{
    lz[p]=-1;
    if(l==r)
    {
        seg[p]=a[l];
        return;
    }
    int m=(l+r)>>1;
    build(p<<1,l,m,a);
    build(p<<1|1,m+1,r,a);
    seg[p]=add(seg[p<<1],seg[p<<1|1]);
}
void apply(int p,int l,int r,int v)
{
    seg[p]=mul(v,r-l+1);
    lz[p]=v;
}
void push(int p,int l,int r)
{
    if(lz[p]==-1 || l==r)return;
    int m=(l+r)>>1;
    apply(p<<1,l,m,lz[p]);
    apply(p<<1|1,m+1,r,lz[p]);
    lz[p]=-1;
}
int query(int p,int l,int r,int L,int R)
{
    if(R<l || r<L)return 0;
    if(L<=l && r<=R)return seg[p];
    push(p,l,r);
    int m=(l+r)>>1;
    return add(query(p<<1,l,m,L,R)+query(p<<1|1,m+1,r,L,R),0);
}
void update(int p,int l,int r,int L,int R,int v)
{
    if(R<l || r<L)return;
    if(L<=l && r<=R)
    {
        apply(p,l,r,v);
        return;
    }
    push(p,l,r);
    int m=(l+r)>>1;
    update(p<<1,l,m,L,R,v);
    update(p<<1|1,m+1,r,L,R,v);
    seg[p]=add(seg[p<<1],seg[p<<1|1]);
}
void check(int p,int l,int r,vector<int>& ar)
{
    if(l==r)
    {
        ar[l]=seg[p];
        return;
    }
    push(p,l,r);
    int m=(l+r)>>1;
    check(p<<1,l,m,ar);
    check(p<<1|1,m+1,r,ar);
}
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;++i)cin>>a[i],a[i]%=Mod;
    vector<int>inv(n+1);
    inv[1]=1;
    for(int i=2;i<=n;++i)inv[i]=mul(Mod-Mod/i,inv[Mod%i]);
    build(1,1,n,a);
    for(int i=0;i<m;++i)
    {
        int l,r;
        cin>>l>>r;
        int ok=mul(query(1,1,n,l,r),inv[r-l+1]);
        update(1,1,n,l,r,ok);
    }
    vector<int>res(n+1);
    check(1,1,n,res);
    for(int i=1;i<=n;++i)cout<<(i>1?" ":"")<<res[i];
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}