#include<bits/stdc++.h>
using namespace std;
#define int long long
int gg(int x,int y){while(y){int t=x%y;x=y;y=t;}return x;}
struct ST{int n,sz;vector<int>t;void init(int m){n=m;sz=1;while(sz<n)sz<<=1;t.assign(2*sz,0);}void upd(int p,int v){int i=p+sz-1;t[i]=v;for(i>>=1;i;i>>=1)t[i]=max(t[i<<1],t[i<<1|1]);}int qry(int l,int r){if(l>r)return 0;int res=0;int L=l+sz-1,R=r+sz-1;while(L<=R){if(L&1)res=max(res,t[L++]);if(!(R&1))res=max(res,t[R--]);L>>=1;R>>=1;}return res;}};
const int MV=200000;
vector<vector<int>>dv;
void sol()
{
    int n;cin>>n;vector<int>a(n);for(int i=0;i<n;++i)cin>>a[i];
    vector<int>cnt(n+1,0);ST st;st.init(n);int g=0;
    for(int i=0;i<n;++i)
    {
        g=gg(g,a[i]);
        for(int j=0;j<(int)dv[a[i]].size();++j){int d=dv[a[i]][j];if(d<=n){++cnt[d];st.upd(d,cnt[d]);}}
        int ans=g<n?st.qry(g+1,n):0;cout<<ans<<(i+1==n?'\n':' ');
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;dv.assign(MV+1,vector<int>());
    for(int d=1;d<=MV;++d){for(int m=d;m<=MV;m+=d)dv[m].push_back(d);}while(t--){sol();}return 0;
}