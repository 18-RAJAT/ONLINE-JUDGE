#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n+5);
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]==-1 || a[i]<0 || m<a[i])exit(0);
    }
    if(a[1]!=0 && a[1]!=1)
    {
        cout<<0<<endl;
        return;
    }
    vector<vector<int>>ar(m+5);
    for(int i=1;i<=m;++i)
    {
        for(int j=i;j<=m;j+=i)ar[j].push_back(i);
    }
    vector<int>cur(m+5,0),nxt(m+5,0);
    cur[1]=1;
    for(int i=2;i<=n;++i)
    {
        for(int j=1;j<=m;++j)nxt[j]=0;
        //swap(cur,nxt);
        //if(a[i]==0)continue;
        for(int j=1;j<=m;++j)
        {
            int tmp=cur[j];
            if(!tmp)continue;
            for(auto& it:ar[j])
            {
                int y=j+it;
                if(y<=m)
                {
                    int z=nxt[y]+tmp;
                    if(z>=998244353)z-=998244353;
                    nxt[y]=z;
                }
            }
            //cur=nxt;
        }
        if(a[i]==0)cur.swap(nxt);
        else
        {
            int ok=nxt[a[i]];
            for(int j=1;j<=m;++j)cur[j]=0;
            cur[a[i]]=ok;
        }
    }
    int ans=0;
    for(int i=1;i<=m;++i)
    {
        ans+=cur[i];
        if(ans>=998244353)ans-=998244353;
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