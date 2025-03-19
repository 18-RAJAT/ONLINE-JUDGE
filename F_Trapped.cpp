#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=100005;
int n,in[N],out[N],f[N],chk=1;
vector<int>g[N];
int a[N],b[N];

//Rajat joshi template
void dfs(int u,int p)
{
    in[u]=chk++;
    f[in[u]]=u;
    for(auto& it:g[u])if(it!=p)dfs(it,u);
    out[u]=chk-1;
}
int tmp;
vector<multiset<int>>bt1,bt2;
void init(int n)
{
    tmp=n;
    bt1.assign(n+1,multiset<int>());
    bt2.assign(n+1,multiset<int>());
}
void upd(vector<multiset<int>>& bit,int p,int v,int d)
{
    for(;p<=tmp;p+=p&-p)
    {
        if(d==1)bit[p].insert(v);
        else bit[p].erase(bit[p].find(v));
    }
}
int qry(vector<multiset<int>>& bit,int p,int v)
{
    int res=0;
    for(;p>0;p-=p&-p)res+=distance(bit[p].begin(),bit[p].upper_bound(v));
    return res;
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i)cin>>b[i];
    for(int i=1;i<n;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    init(n);
    for(int i=1;i<=n;++i)
    {
        int p=in[i];
        upd(bt1,p,a[i],1);
        upd(bt2,p,b[i],1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int x,d;
            char c;
            cin>>x>>c>>d;
            int p=in[x];
            if(c=='a')
            {
                upd(bt1,p,a[x],-1);
                a[x]+=d;
                // cout<<a[x]<<endl;
                upd(bt1,p,a[x],1);
            }
            else
            {
                upd(bt2,p,b[x],-1);
                b[x]+=d;
                // cout<<b[x]<<endl;
                upd(bt2,p,b[x],1);
            }
        }
        else
        {
            int x,k;
            cin>>x>>k;
            int l=in[x],r=out[x];
            // cout<<l<<" "<<r<<endl;
            int ca=qry(bt1,r,k)-qry(bt1,l-1,k),cb=qry(bt2,r,k-1)-qry(bt2,l-1,k-1);
            cout<<(ca-cb)<<endl;
        }
    }
    return 0;
}