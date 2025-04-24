#include<bits/stdc++.h>
using namespace std;
#define int long long
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
char grid[55][55];
int n,m;
int vis[55][55];
int inrange(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m;
}
int dfs(int x,int y,char ch,int p,int q)
{
    vis[x][y]=1;
    for(int i=0;i<4;++i)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx==p && ny==q)continue;
        if(inrange(nx,ny) && grid[nx][ny]==ch)
        {
            if(vis[nx][ny])return 1;
            if(dfs(nx,ny,ch,x,y))return 1;
        }
    }
    return 0;
}
void sol()
{
    cin>>n>>m;
    for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)cin>>grid[i][j];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            memset(vis,0,sizeof(vis));
            if(dfs(i,j,grid[i][j],-1,-1))
            {
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
}
signed main()
{
    sol();
    return 0;
}