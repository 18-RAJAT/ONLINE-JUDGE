#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=0;
    vector<vector<int>>a(n+5,vector<int>(n+5,0));
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            a[i][j]=i*n+j+1;
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            int tmp=a[i][j];
            int x1=j-1>=0?a[i][j-1]:0,x2=i-1>=0?a[i-1][j]:0;
            int x3=i+1<n?a[i+1][j]:0,x4=j+1<n?a[i][j+1]:0;
            ans=max(ans,tmp+x1+x2+x3+x4);
        }
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