#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    vector<vector<int>>row(n,vector<int>(m)),col(n,vector<int>(m));
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=1;j<m;++j)
        {
            row[i][j]=row[i][j-1]+(a[i][j]=='.' && a[i][j-1]=='.');
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=1;j<n;++j)
        {
            col[j][i]=col[j-1][i]+(a[j][i]=='.' && a[j-1][i]=='.');
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,x1,y1,ans=0;
        cin>>x>>y>>x1>>y1;
        x--,y--,x1--,y1--;
        for(int j=x;j<=x1;++j)ans+=row[j][y1]-row[j][y];
        for(int j=y;j<=y1;++j)ans+=col[x1][j]-col[x][j];
        
        cout<<ans<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}