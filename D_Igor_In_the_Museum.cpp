#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>s(n);
    for(int i=0;i<n;++i)cin>>s[i];
    int dx[4]={0,1,-1,0},dy[4]={1,0,0,-1};
    vector<vector<int>>ar(n,vector<int>(m,-1));
    vector<int>ans(n*m);
    function<void(int,int,int)>recur=[&](int i,int j,int p)
    {
        ar[i][j]=p;
        for(int t=0;t<4;++t)
        {
            int x=i+dx[t],y=j+dy[t];
            if(x>=0 && x<n && y>=0 && y<m)
            {
                if(s[x][y]=='*')ans[p]++;
                else if(ar[x][y]==-1)recur(x,y,p);
            }
        }
    };
    int p=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(s[i][j]=='*')continue;
            if(ar[i][j]==-1)recur(i,j,p++);
        }
    }
    while(k--)
    {
        int x,y;
        cin>>x>>y;
        cout<<ans[ar[x-1][y-1]]<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}