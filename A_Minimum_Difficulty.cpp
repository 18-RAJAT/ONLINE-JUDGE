#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=INT_MAX;
    for(int j=1;j+1<n;++j)
    {
        vector<int>b;
        for(int i=0;i<n;++i)
        {
            if(i==j)continue;
            b.push_back(a[i]);
        }
        int res=0;
        for(int i=0;i<b.size()-1;++i)res=max(res,b[i+1]-b[i]);
        ans=min(ans,res);
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}