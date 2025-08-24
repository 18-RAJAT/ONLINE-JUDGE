#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    vector<int>par(n+1),ar(n+1,0),cnt(n+1,0);
    vector<int>check(n+1,0);
    for(int i=1;i<=n;++i)par[i]=i;
    function<int(int)>find=[&](int x)
    {
        if(par[x]==x)return x;
        return par[x]=find(par[x]);
    };
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int u,v;
            cin>>u>>v;
            int x=find(u),y=find(v);
            if(x==y)continue;
            if(ar[x]<ar[y])swap(x,y);
            par[y]=x;
            cnt[x]+=cnt[y];
            if(ar[x]==ar[y])ar[x]++;
        }
        else if(t==2)
        {
            int v;
            cin>>v;
            check[v]^=1;
            int r=find(v);
            if(check[v]?cnt[r]++:cnt[r]--);
        }
        else
        {
            int v;
            cin>>v;
            int r=find(v);
            cout<<(cnt[r]>=1?"Yes":"No")<<endl;
        }
    }
}
signed main()
{
    sol();
    return 0;
}