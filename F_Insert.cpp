#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>p(n+1),a(n+1),ans(n+1);
    for(int i=1;i<=n;++i)cin>>p[i];
    auto update=[&](int i,int j)
    {
        for(;i<=n;i+=i&-i)a[i]+=j;
    };
    auto recur=[&](int i)
    {
        int x=0,msk=1<<19;
        while(msk)
        {
            if(x+msk<=n && a[x+msk]<i)i-=a[x+msk],x+=msk;
            msk>>=1;
        }
        return x+1;
    };
    for(int i=1;i<=n;++i)update(i,1);
    for(int i=n;i;--i)
    {
        int x=recur(p[i]);
        // cout<<"Test-> "<<x<<" "<<recur(a[p[i]])<<endl;
        // if(~ans[x] && ans[x]<i)continue;
        ans[x]=i,update(x,-1);
    }
    for(int i=1;i<=n;++i)cout<<ans[i]<<(i==n?"\n":" ");
}
signed main()
{
    sol();
    return 0;
}