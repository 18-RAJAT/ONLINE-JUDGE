#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>ans(n,vector<int>(m));
    int res=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            while(i && ans[i-1][j]==res)res=(res+1)%k;
            while(j && ans[i][j-1]==res)res=(res+1)%k;
            ans[i][j]=(res++)%k;
            res%=k;
            cout<<ans[i][j]+1<<" ";
        }
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