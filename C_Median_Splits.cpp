#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;++i)cin>>a[i];
    vector<int>p(n+1,0);
    for(int i=1;i<=n;++i)p[i]=p[i-1]+(a[i]<=k?1:-1);
    int ok=0;
    vector<int>pre(n+2,-1e9),suf(n+2,-1e9);
    for(int i=n-1;i>=1;--i)
    {
        if(i%2==0)
        {
            pre[i]=max(p[i],pre[i+1]);
            suf[i]=suf[i+1];
        }
        else
        {
            suf[i]=max(p[i],suf[i+1]);
            pre[i]=pre[i+1];
        }
    }
    for(int i=1;i<=n-2 && !ok;++i)
    {
        int chk=i%2?1:0;
        if(p[i]<chk)continue;
        if(i+1<=n-1)
        {
            if(i%2==0)
            {
                if(pre[i+1]>=p[i] || suf[i+1]>=p[i]+1){ok=1;break;}
            }
            else
            {
                if(suf[i+1]>=p[i] || pre[i+1]>=p[i]+1){ok=1;break;}
            }
        }
    }
    if(!ok)
    {
        int Mn=LLONG_MAX,Mx=LLONG_MAX;
        (1%2==0)?Mn=p[1]:Mx=p[1];
        for(int i=2;i<=n-1 && !ok;++i)
        {
            int chk=(n-i)%2?1:0;
            if(p[n]-p[i]<chk)
            {
                (i%2==0)?Mn=min(Mn,p[i]):Mx=min(Mx,p[i]);
                continue;
            }
            int f=0;
            if(i%2==0)
            {
                if(Mn<=p[i] || Mx<=p[i]-1)f=1;
            }
            else
            {
                if(Mx<=p[i] || Mn<=p[i]-1)f=1;
            }
            if(f){ok=1;break;}
            (i%2==0)?Mn=min(Mn,p[i]):Mx=min(Mx,p[i]);
        }
    }
    // for(auto& it:p)
    // {
    //     it=-it;
    //     pre[it]=max(p[it],pre[it+1]);
    //     suf[it]=suf[it+1];
    //     cout<<pre[it]<<" "<<suf[it]<<endl;
    // }
    if(!ok)
    {
        vector<bool>ar(n+1,0),br(n+2,0);
        for(int i=1;i<=n-1;++i)
        {
            int tmp=(n-i)%2?1:0;
            ar[i]=(p[n]-p[i]>=tmp);
        }
        br[n]=ar[n];
        for(int i=n-1;i>=1;--i)br[i]=ar[i] || br[i+1];
        for(int i=1;i<=n-2 && !ok;++i)
        {
            int tmp=i%2?1:0;
            if(p[i]>=tmp && br[i+1]){ok=1;break;}
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
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