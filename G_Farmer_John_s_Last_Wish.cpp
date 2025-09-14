#include<bits/stdc++.h>
using namespace std;
#define int long long

//Rajat joshi template
const int N=200005;
int gcd(int x,int y)
{
    if(y==0)return x;
    return gcd(y,x%y);
}
struct SegTree
{
    int n,sz;
    vector<int>tree;
    SegTree(int m=0)
    {
        init(m);
    }
    void init(int m)
    {
        n=m;
        sz=1;
        while(sz<n)sz<<=1;
        tree.assign(2*sz,0);
    }
    void update(int p,int v)
    {
        int i=p+sz-1;
        tree[i]=v;
        for(i>>=1;i;i>>=1)tree[i]=max(tree[i<<1],tree[i<<1|1]);
    }
    int query(int l,int r)
    {
        if(r<l)return 0;
        int res=0,L=l+sz-1,R=r+sz-1;
        while(L<=R)
        {
            if(L&1)res=max(res,tree[L++]);
            if(!(R&1))res=max(res,tree[R--]);
            L>>=1,R>>=1;
        }
        return res;
    }
};
vector<vector<int>>ar;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>cnt(n+1,0);
    SegTree st(n);
    int g=0;
    for(int i=0;i<n;++i)
    {
        g=gcd(g,a[i]);
        for(int j=0;j<ar[a[i]].size();++j)
        {
            int x=ar[a[i]][j];
            if(x<=n)
            {
                cnt[x]++;
                st.update(x,cnt[x]);
            }
        }
        int ans=(g<n)?st.query(g+1,n):0;
        cout<<ans<<(i+1==n?"\n":" ");
    }
}
signed main()
{
    int t;
    cin>>t;
    ar.assign(N+1,vector<int>());
    for(int i=1;i<=N;++i)
    {
        for(int j=i;j<=N;j+=i)ar[j].push_back(i);
    }
    while(t--)
    {
        sol();
    }
    return 0;
}