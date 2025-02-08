#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<unordered_map<int,int>>mp(n);
    for(int i=0;i<n;++i)
    {
        int k;
        cin>>k;
        a[i]=k;
        for(int j=0;j<k;++j)
        {
            int x;
            cin>>x;
            mp[i][x]++;
        }
    }
    double ans=0;
    auto calc=[&](int i,int j)
    {
        double p=0;
        for(auto& it:mp[i])
        {
            int x=it.first,y=it.second;
            if(mp[j].count(x))p+=double(y)/a[i]*double(mp[j][x])/a[j];
        }
        return p;
    };
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            ans=max(ans,mp[i].size()<=mp[j].size()?calc(i,j):calc(j,i));
        }
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}