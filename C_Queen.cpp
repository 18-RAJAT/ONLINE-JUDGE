#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1000005;
vector<int>a[N],b;
map<int,int>mp;
int vis[N],n,x,y;
void sol()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y;
        if(~x)
        {
            a[i+1].push_back(x);
            a[x].push_back(i+1);
            vis[i+1]=y;
            mp[i+1]=x;
        }
    }
    for(int i=1;i<=n;++i)
    {
        if(vis[i]==1)
        {
            int cnt=0;
            for(auto& it:a[i])if(vis[it]==1&&mp[i]!=it)++cnt;
            if(cnt==a[i].size()-1)b.push_back(i);
        }
    }
    if(b.size()==0)cout<<-1;
    else for(auto& it:b)cout<<it<<" ";
}
signed main()
{
    sol();
    return 0;
}