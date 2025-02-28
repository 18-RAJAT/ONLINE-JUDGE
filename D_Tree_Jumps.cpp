#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353;
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n+5);
    for(int i=2;i<=n;++i)
    {
        int p;
        cin>>p;
        adj[p].push_back(i);
    }
    vector<int>d(n+1,0);
    queue<int>q;
    q.push(1);
    int mx=0;
    while(!q.empty())
    {
        int F=q.front();
        q.pop();
        for(auto& it:adj[F])
        {
            d[it]=d[F]+1;
            mx=max(mx,d[it]);
            q.push(it);
        }
    }
    vector<vector<int>>ar(mx+5);
    for(int i=1;i<=n;++i)ar[d[i]].push_back(i);
    vector<int>ans(n+5,0),tmp(mx+5,0);
    for(int i=mx;~i;--i)
    {
        int sum=0;
        for(auto& it:ar[i])
        {
            if(it==1)ans[it]=(1+tmp[i+1])%Mod;
            // else if(i==mx && !adj[it].size() && it!=1)ans[it]=1; //recheck
            else
            {
                int res=0;
                for(auto& u:adj[it])res=(res+ans[u])%Mod;
                int rem=(tmp[i+1]-res+Mod)%Mod;
                // cout<<it<<" "<<rem<<endl;
                ans[it]=(1+rem)%Mod;
            }
            sum=(sum+ans[it])%Mod;
        }
        tmp[i]=sum;
        // sum=move(mx);
    }
    cout<<ans[1]%Mod<<endl;
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