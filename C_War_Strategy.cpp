#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    int l=k-1,r=n-k,ans=1;
    int mn=min(l,(m+1)/2);
    for(int i=1;i<=mn;++i)
    {
        int tot=m-(i<<1)+1;
        if(r<tot)tot=r;
        if(i<tot)tot=i;
        int cur=i+tot+1;
        if(ans<cur)ans=cur;
    }
    mn=min(r,(m+1)/2);
    for(int i=1;i<=mn;++i)
    {
        int tot=m-(i<<1)+1;
        if(l<tot)tot=l;
        if(i<tot)tot=i;
        int cur=i+tot+1;
        if(ans<cur)ans=cur;
    }
    if(n<ans)ans=n;
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