#include"bits/stdc++.h"
using namespace std;
#define int long long
struct st
{
    int l,r,id,ok;
    bool operator<(const st& q)const
    {
        if(ok!=q.ok)return ok<q.ok;
        return r<q.r;
    }
};
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    int sq=sqrt(n);
    vector<int>a(n),ar(1000005),res(m);
    int ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(i)a[i]^=a[i-1];
    }
    vector<st>q(m);
    for(int i=0;i<m;++i)
    {
        cin>>q[i].l>>q[i].r;
        q[i].l--;
        q[i].r--;
        q[i].id=i;
        q[i].ok=q[i].l/sq;
    }
    sort(q.begin(),q.end());
    auto Insert=[&](int v)
    {
        ans+=ar[v^k];
        ar[v]++;
    };
    auto Delete=[&](int v)
    {
        ar[v]--;
        ans-=ar[v^k];
    };
    int L=1,R=0;
    for(auto& it:q)
    {
        int l=it.l,r=it.r;
        while(R<r)
        {
            R++;
            Insert(a[R]);
        }
        while(L>l)
        {
            L--;
            Insert(a[L]);
        }
        while(R>r)
        {
            Delete(a[R]);
            R--;
        }
        while(L<l)
        {
            Delete(a[L]);
            L++;
        }
        int pref=a[l-1]&-(l>0);
        res[it.id]=ans+ar[pref^k];
    }
    for(int i=0;i<m;++i)cout<<res[i]<<endl;
}
signed main()
{
    sol();
    return 0;
}