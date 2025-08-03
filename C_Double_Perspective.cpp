#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<array<int,4>>v(n);
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        v[i]={b-a,i,a,b};
    }
    sort(v.begin(),v.end());
    vector<int>par(2*n+10),rank(2*n+10);
    iota(par.begin(),par.end(),0);
    function<int(int)>find=[&](int x)
    {
        return par[x]==x?x:par[x]=find(par[x]);
    };
    auto join=[&](int a,int b)
    {
        a=find(a);
        b=find(b);
        if(a==b)return 0;
        if(rank[a]==rank[b])rank[b]++;
        if(rank[b]<rank[a])swap(a,b);
        par[a]=b;
        return 1;
    };
    vector<int>ans;
    for(auto& it:v)if(join(it[2],it[3]))ans.push_back(it[1]);
    cout<<ans.size()<<endl;
    for(auto& it:ans)cout<<it+1<<" ";
    cout<<endl;
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