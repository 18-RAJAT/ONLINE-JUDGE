#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int a[n][m];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];
            mp[a[i][j]]=i;
        }
    }
    int b[m][n];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        int j=mp[b[0][i]];
        for(int k=0;k<m;++k)
        {
            cout<<a[j][k]<<" ";
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