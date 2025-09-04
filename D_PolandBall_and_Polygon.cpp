#include<bits/stdc++.h>
using namespace std;
#define int long long
const int sz=1<<20;
int tree[2*sz],vis[sz];
void update(int x)
{
    int node=x+sz;
    while(node>=1)
    {
        tree[node]++,node/=2;
    }
}
int query(int l,int r,int node,int x,int y)
{
    l=max(l,x),r=min(r,y);
    if(r<=l)return 0;
    if(l==x && r==y)return tree[node];
    int z=(x+y)/2;
    return (query(l,r,2*node,x,z)+query(l,r,2*node+1,z,y));
}
void sol()
{
    int n,k;
    cin>>n>>k;
    k=min(k,n-k);
    int ans=1,res=1;
    for(int i=0;i<n;++i)
    {
        if(!vis[res])
        {
            vis[res]=1;
            ans+=query(res+1,res+k,1,0,sz)+query(0,res+k-n,1,0,sz)+1;
            update(res);
            res+=k;
            if(n<=res)res-=n;
            update(res);
        }
        cout<<ans<<" ";
    }
}
signed main()
{
    sol();
    return 0;
}