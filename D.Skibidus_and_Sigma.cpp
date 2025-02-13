#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    vector<int>res;
    for(int i=0;i<n;++i)
    {
        int x=0,y=0;
        for(int j=0;j<m;++j)
        {
            int p;
            cin>>p;
            x+=(m-j)*p,y+=p;
        }
        res.push_back(y);
        ans+=x;
    }
    sort(res.begin(),res.end());
    for(int i=0;i<n;++i)ans+=res[n-i-1]*m*(n-i-1);
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