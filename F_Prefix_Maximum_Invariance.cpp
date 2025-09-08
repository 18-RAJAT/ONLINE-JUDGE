#include<bits/stdc++.h>
using namespace std;
#define int long long

//Rajat joshi template
struct segtree
{
    int n;
    vector<int>st;
    void init(int x)
    {
        n=1;
        while(n<x+2)n<<=1;
        st.assign(2*n,0);
    }
    void update(int x,int y)
    {
        int p=x+n;
        st[p]=max(st[p],y);
        for(p>>=1;p;p>>=1)st[p]=max(st[p<<1],st[p<<1|1]);
    }
    int query(int l,int r)
    {
        if(l>r)return 0;
        int res=0,L=l+n,R=r+n;
        while(L<=R)
        {
            if(L&1)res=max(res,st[L++]);
            if(!(R&1))res=max(res,st[R--]);
            L>>=1;R>>=1;
        }
        return res;
    }
};
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1),b(n+1);
    for_each(a.begin()+1,a.end(),[&](int& x){cin>>x;});
    for_each(b.begin()+1,b.end(),[&](int& x){cin>>x;});
    int m=max(*max_element(a.begin()+1,a.end()),*max_element(b.begin()+1,b.end()));
    segtree seg;
    seg.init(m);
    int ans=0;
    for(int i=1;i<=n;++i)
    {
        int tmp=seg.query(a[i],m);
        int tot=0,rem=i-tmp,t=max(a[i],b[i]),res=seg.query(t,m);
        (tmp==0)?rem=i:rem=i-tmp;//chk p
        if(b[i]==a[i])tot+=rem;
        tot+=res,ans+=tot*(n-i+1);
        seg.update(a[i],i);
    }
    cout<<ans<<endl;
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