#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>a;
    int mx=0;
    for(int i=0;i<n;++i)
    {
        int k;
        cin>>k;
        vector<int>b(k);
        // a[i].resize(k);mx=max(mx,k);
        for(int j=0;j<k;++j)cin>>b[j];
        a.push_back(b);
        if(mx<k)mx=k;
        // a.push_back(move(b));
    }
    auto cmp=[&](vector<int>& x,vector<int>& y)
    {
        int a=x.size(),b=y.size();
        int mn=min(a,b);
        for(int i=0;i<mn;++i)
        {
            if(x[i]!=y[i])return x[i]<y[i];
        }
        // while(i<a && i<b)
        // {
        //     if(x[i]!=y[i])return x[i]<y[i];i++;
        // }
        return a<b;
    };
    sort(a.begin(),a.end(),cmp);
    vector<int>ans(mx,-1);
    // ans.reserve(200005);
    // int cur=0;
    // for(int j=1;j<=mx;++j)
    // {
    //     while(cur<n && a[cur].size()<j)cur++;
    //     cout<<a[cur][j-1]<<(j==mx?"\n":" ");
    // }
    for(auto& it:a)
    {
        // if(cur<it.size())
        // {
        //     ans.insert(ans.end(),it.begin()+(cur),it.end());
        //     cur=it.size();
        // }
        for(int j=0;j<it.size();++j)
        {
            if(ans[j]==-1)ans[j]=it[j];
        }
    }
    for(int i=0;i<mx;++i)
    {
        if(i>=1){cout<<" ";}
        cout<<ans[i];
    }
    // if(ans.empty())cout<<endl;
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