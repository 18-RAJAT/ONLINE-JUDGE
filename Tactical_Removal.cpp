#include<bits/stdc++.h>
using namespace std;
#define int long long

//Rajat joshi template
struct Fenw
{
    int n;
    vector<int>f;
    Fenw(int n):n(n),f(n+1,0){}
    void upd(int i,int d){for(;i<=n;i+=i&-i)f[i]+=d;}
    int qry(int i){int s=0;for(;i>0;i-=i&-i)s+=f[i];return s;}
};
int kth(Fenw& f,int k,int n)
{
    int l=1,r=n;
    while(l<r)
    {
        int m=(l+r)/2,c=m-f.qry(m);
        if(c>=k)r=m;
        else l=m+1;
    }
    return l;
}
int score(int l,int n,Fenw& f,Fenw& s)
{
    if(l<=0)return 0;
    int ans=0;
    if(l%2==0)
    {
        int m=l/2,x=kth(f,m,n);
        ans=2*((x*(x+1))/2-s.qry(x));
    }
    else
    {
        int m=(l+1)/2,x=kth(f,m,n),p=0;
        if(m-1>0)
        {
            int xp=kth(f,m-1,n);
            p=(xp*(xp+1))/2-s.qry(xp);
        }
        ans=2*p+x;
    }
    return ans;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>p(n);
    for(auto& it:p)cin>>it;
    int l=n-k;
    Fenw f(n),s(n);
    for(int i=0;i<k;++i)f.upd(p[i],1),s.upd(p[i],p[i]);
    int ans=0,c=n-k+1;
    for(int i=0;i<c;++i)
    {
        ans=max(ans,score(l,n,f,s));
        if(i<c-1)
        {
            f.upd(p[i],-1),s.upd(p[i],-p[i]);
            // cout<<"Check "<<i<<endl;
            // for(auto& it:f.f)cout<<it<<" ";cout<<endl;
            f.upd(p[i+k],1),s.upd(p[i+k],p[i+k]);
        }
        // cout<<"Check "<<i<<endl;
        // for(auto& it:f.f)cout<<it<<" ";cout<<endl;
        // for(auto& it:s.f)cout<<it<<" ";cout<<endl;
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