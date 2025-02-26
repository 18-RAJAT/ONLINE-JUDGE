#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    int nxt=n+1;
    for(int i=0;i<=n+1;++i)
    {
        if((i&(~x))!=0)
        {
            nxt=i;
            break;
        }
    }
    int mn=min(n+1,nxt);
    vector<int>p(mn+1,0);
    for(int i=0;i<mn;++i)p[i+1]=p[i]|i;
    int res=0;
    for(int k=0;k<=mn;++k)
    {
        if((p[k]==x?k:k+1)<=n)res=k;
    }
    vector<int>ar;
    for(int i=0;i<res;++i)ar.push_back(i);
    int cur=(res?p[res]:0);
    if(cur!=x)ar.push_back(x&(~cur));
    vector<int>ans=ar;
    while(ans.size()<n)ans.push_back(ans[0]);
    for(int i=0;i<n;++i)cout<<ans[i]<<(i+1==n?"\n":" ");
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