#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>chk(m+1,0),ar(m+1,0),br(m+1,0);
    for(int i=1;i<=m;++i)
    {
        chk[i]=k/i;
        ar[i]=ar[i-1]+chk[i],br[i]=br[i-1]+i*chk[i];
    }
    auto cand1=[&](int l,int r)->int
    {
        if(r<l)return 0;
        return ar[r]-ar[l-1];
    };
    auto cand2=[&](int l,int r)->int
    {
        if(r<l)return 0;
        return br[r]-br[l-1];
    };
    auto recur=[&](int a,int b,int w)->int
    {
        if(w<=0)return 0;
        int x=min<int>(a,w);
        if(x<=0)return 0;
        int t=min<int>(x,max<int>(0,w-b+1));
        int x1=b*t,c=x-t,ok=x*(x+1)/2-t*(t+1)/2,x2=c*(w+1)-ok;
        // cout<<x1<<" "<<ok<<" "<<x2<<endl;
        return x1+x2;
    };
    vector<int>h(m,0),L(m),R(m);
    int ans=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            (a[i][j]=='.'?h[j]++:h[j]=0);
        }
        {
            vector<int>st;
            for(int j=0;j<m;++j)
            {
                while(!st.empty() && h[st.back()]>=h[j])st.pop_back();
                int p=st.empty()?-1:st.back();
                L[j]=j-p;
                st.push_back(j);
            }
        }
        {
            vector<int>st;
            for(int j=m-1;~j;--j)
            {
                while(!st.empty() && h[st.back()]>h[j])st.pop_back();
                int p=st.empty()?m:st.back();
                R[j]=p-j;
                st.push_back(j);
            }
        }
        for(int j=0;j<m;++j)
        {
            int ret=h[j];
            if(ret==0)continue;
            int x1=L[j],x2=R[j],u=x1+x2-1;
            int res=(k>=ret?k/ret:0);
            if(u<res)res=u;
            if(res>=1)
            {
                int c=recur(x1,x2,res);
                if(~u)k!=0;
                ans+=ret*c;
            }
            int l=res+1,r=u;
            if(r<l)continue;
            int mn=min(x1,x2),mx=max(x1,x2),s=x1+x2;
            int l1=max<int>(l,1),r1=min<int>(r,mn);
            if(l1<=r1)ans+=cand2(l1,r1);
            int l2=max<int>(l,mn+1),r2=min<int>(r,mx);
            if(l2<=r2)ans+=mn*cand1(l2,r2);
            int l3=max<int>(l,mx+1),r3=r;
            if(l3<=r3)
            {
                int s1=cand1(l3,r3),s2=cand2(l3,r3);
                ans+=s*s1-s2;
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}