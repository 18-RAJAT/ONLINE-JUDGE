#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    vp.reserve(n);
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        vp.emplace_back(x,i);
    }
    sort(vp.begin(),vp.end(),[&](auto& a,auto& b)->int
    {
        if(a.first!=b.first)return a.first>b.first;
        return a.second<b.second;
    });
    vector<char>ch(n+5,0);
    int ans=0,idx=0;
    while(idx<n)
    {
        int j=idx,tp=vp[idx].first;
        while(j<n && vp[j].first==tp)j++;
        int cur=idx;
        while(cur<j)
        {
            int l=vp[cur].second,r=l,nxt=cur+1;
            while(nxt<j && vp[nxt].second==r+1)r=vp[nxt].second,nxt++;
            if(!ch[l-1] && !ch[r+1])ans++;
            cur=nxt;
        }
        for(int k=idx;k<j;++k)ch[vp[k].second]=1;
        idx=j;
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