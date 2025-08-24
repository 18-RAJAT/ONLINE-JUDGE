#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=INT_MAX/4;
void sol()
{
    int h,w;
    cin>>h>>w;
    vector<string>a(h);
    for(int i=0;i<h;++i)cin>>a[i];
    pair<int,int>ar={-1,-1},br={-1,-1};
    for(int i=0;i<h;++i)
    {
        for(int j=0;j<w;++j)
        {
            if(a[i][j]=='S')ar={i,j};
            if(a[i][j]=='G')br={i,j};
        }
    }
    vector<vector<array<int,2>>>arr(h,vector<array<int,2>>(w,{N,N}));
    deque<tuple<int,int,int>>q;
    arr[ar.first][ar.second][0]=0;
    q.push_back(make_tuple(ar.first,ar.second,0));
    auto recur=[&](int r,int c,int p)->int
    {
        char ch=a[r][c];
        if(ch=='#')return 0;
        if(ch=='o')return p==0;
        if(ch=='x')return p==1;
        return 1;
    };
    int dr[4]={-1,1,0,0},dc[4]={0,0,-1,1};
    while(!q.empty())
    {
        int r,c,p;
        tie(r,c,p)=q.front();
        q.pop_front();
        int d=arr[r][c][p];
        if(r==br.first && c==br.second)
        {
            cout<<d<<endl;
            return;
        }
        for(int k=0;k<4;++k)
        {
            int nr=r+dr[k],nc=c+dc[k];
            if(nr<0 || nr>=h || nc<0 || nc>=w)continue;
            if(!recur(nr,nc,p))continue;
            int ok=p;
            if(a[nr][nc]=='?')ok^=1;
            if(arr[nr][nc][ok]>d+1)
            {
                arr[nr][nc][ok]=d+1;
                q.push_back(make_tuple(nr,nc,ok));
            }
        }
    }
    cout<<-1<<endl;
}
signed main()
{
    sol();
    return 0;
}