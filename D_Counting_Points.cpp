#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>x(n),r(n);
    for(int i=0;i<n;++i)cin>>x[i];
    for(int i=0;i<n;++i)cin>>r[i];
    map<int,int>mp;
    for(int i=0;i<n;++i)
    {
        int a=x[i]-r[i],b=x[i]+r[i];
        for(int j=a;j<=b;++j)
        {
            int tp=(r[i]*r[i])-((j-x[i])*(j-x[i])),y=sqrt(tp);
            mp[j]=max(mp[j],y);
        }
    }
    int ans=0;
    for(auto& it:mp)ans+=2*it.second+1;
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