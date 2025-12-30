#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    vector<int>pre(m),suf(m);
    for(int i=0,j=0;i<n && j<m;++i)
    {
        if(s[i]==t[j])pre[j++]=i;
    }
    for(int i=n-1,j=m-1;~i && ~j;--i)
    {
        if(s[i]==t[j])suf[j--]=i;
    }
    int ans=0;
    ans=max(ans,suf[0]);
    ans=max(ans,n-1-pre[m-1]);
    for(int j=0;j<m-1;++j)ans=max(ans,suf[j+1]-1-pre[j]);
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}