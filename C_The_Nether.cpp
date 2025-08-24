#include<bits/stdc++.h>
using namespace std;
#define int long long
int ask(int l,int r,vector<int>& a)
{
    cout<<"? "<<l<<" "<<r;
    for(int i=0;i<r;++i)cout<<" "<<a[i];
    cout<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}
int query(int u,int v)
{
    cout<<"? "<<u<<" 2 "<<u<<" "<<v<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}
void sol()
{
    int n;
    cin>>n;
    vector<int>ar(n),dp(n+5,0);
    for(int i=0;i<n;++i)ar[i]=i+1;
    for(int i=1;i<=n;++i)
    {
        dp[i]=ask(i,n,ar);
        if(dp[i]==-1)return;
    }
    int mx=0,tmp=1;
    for(int i=1;i<=n;++i)
    {
        if(mx<dp[i])
        {
            mx=dp[i];
            tmp=i;
        }
    }
    map<int,vector<int>>mp;
    for(int i=1;i<=n;++i)
    {
        if(dp[i]<=mx)mp[dp[i]].push_back(i);
    }
    vector<int>ans;
    ans.push_back(tmp);
    int cur=tmp;
    for(int k=mx;k>=2;--k)
    {
        auto& ret=mp[k-1];
        auto it=find_if(ret.begin(),ret.end(),[&](int x)
        {
            int res=query(cur,x);
            if(res==-1)exit(0);
            if(res==2)
            {
                cur=x;
                ans.push_back(cur);
                return 1;
            }
            return 0;
        });
        if(it==ret.end())break;
    }
    cout<<"! "<<ans.size();
    for(auto& it:ans)cout<<" "<<it;
    cout<<endl;
    cout.flush();
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