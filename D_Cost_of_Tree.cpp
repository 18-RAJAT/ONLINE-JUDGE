#include"bits/stdc++.h"
using namespace std;
#define int long long
struct L{int m,b;};
struct N{L f;int32_t l,r;};
static vector<N> pool;
static int32_t ptr;
static int LIM;
static int NEG=-(4LL<<60);
inline int ev(const L&h,int x){return h.m*x+h.b;}
int32_t add(int32_t id,int l,int r,L nw)
{
    if(id==0){pool[ptr].f=nw;pool[ptr].l=pool[ptr].r=0;return ptr++;}
    int mid=(l+r)>>1;
    if(ev(nw,mid)>ev(pool[id].f,mid))swap(nw,pool[id].f);
    if(l==r)return id;
    if(ev(nw,l)>ev(pool[id].f,l))pool[id].l=add(pool[id].l,l,mid,nw);
    else if(ev(nw,r)>ev(pool[id].f,r))pool[id].r=add(pool[id].r,mid+1,r,nw);
    return id;
}
int ask(int32_t id,int l,int r,int x)
{
    if(id==0)return NEG;
    int res=ev(pool[id].f,x);
    if(l==r)return res;
    int mid=(l+r)>>1;
    if(x<=mid)return max(res,ask(pool[id].l,l,mid,x));
    return max(res,ask(pool[id].r,mid+1,r,x));
}
void sol()
{
    static int once=0;
    if(!once){ios::sync_with_stdio(false);cin.tie(nullptr);once=1;}
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;++i)cin>>a[i];
    vector<vector<int>> g(n+1);
    for(int i=1;i<n;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> parent(n+1,0),depth(n+1,0),order;
    order.reserve(n);
    vector<int> st;
    st.push_back(1);
    parent[1]=0;
    while(!st.empty())
    {
        int v=st.back();
        st.pop_back();
        order.push_back(v);
        for(int x:g[v])
        {
            if(x==parent[v])continue;
            parent[x]=v;
            depth[x]=depth[v]+1;
            st.push_back(x);
        }
    }
    vector<vector<int>> kid(n+1);
    for(int i=1;i<(int)order.size();++i)kid[parent[order[i]]].push_back(order[i]);
    vector<int> mass(n+1,0),lift(n+1,0),deep(n+1,0),gain(n+1,0),out(n+1,0);
    vector<int32_t> root(n+1,0);
    vector<vector<L>> bag(n+1);
    LIM=n+1;
    if(pool.empty())pool.resize(5000000);
    ptr=1;
    for(int idx=n-1;idx>=0;--idx)
    {
        int v=order[idx];
        mass[v]=a[v];
        lift[v]=a[v]*depth[v];
        deep[v]=depth[v];
        int best=0;
        int top1=-1,top2=-1,who=-1;
        for(int c:kid[v])
        {
            mass[v]+=mass[c];
            lift[v]+=lift[c];
            deep[v]=max(deep[v],deep[c]);
            best=max(best,gain[c]);
            int d=deep[c];
            if(d>top1){top2=top1;top1=d;who=c;}
            else if(d>top2)top2=d;
        }
        for(int c:kid[v])
        {
            int outside=max(depth[v],(c==who?top2:top1));
            int x=outside+1;
            int cand=ask(root[c],0,LIM,x);
            best=max(best,cand);
        }
        if(best<0)best=0;
        gain[v]=best;
        out[v]=lift[v]-depth[v]*mass[v]+gain[v];
        int heavy=0;
        for(int c:kid[v])if(heavy==0||bag[c].size()>bag[heavy].size())heavy=c;
        if(heavy!=0)
        {
            bag[v].swap(bag[heavy]);
            root[v]=root[heavy];
            root[heavy]=0;
            vector<L>().swap(bag[heavy]);
        }
        for(int c:kid[v])
        {
            if(c==heavy)continue;
            for(auto &ln:bag[c])root[v]=add(root[v],0,LIM,ln);
            if(!bag[c].empty())
            {
                bag[v].insert(bag[v].end(),bag[c].begin(),bag[c].end());
                vector<L>().swap(bag[c]);
            }
            root[c]=0;
        }
        L self{mass[v],-mass[v]*depth[v]};
        root[v]=add(root[v],0,LIM,self);
        bag[v].push_back(self);
    }
    for(int i=1;i<=n;++i)
    {
        cout<<out[i];
        if(i==n)cout<<endl;
        else cout<<" ";
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