#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;++i)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i)
    {
        int x=(i&1)?m-1-i/2:i/2,y=m-x-1;
        for(int j=0;j<3;++j)cout<<a[x]<<" "<<a[y]<<" ";
        cout<<endl;
    }
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