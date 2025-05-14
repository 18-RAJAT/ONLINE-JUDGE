#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,-1));
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    int x=n/2,y=n/2;
    if(n%2==0)x--;
    if(n%2==0)y--;
    int tmp=0,res=0,cnt=1;
    a[x][y]=res++;
    while(res<n*n)
    {
        for(int i=0;i<2;++i)
        {
            for(int j=0;j<cnt;++j)
            {
                x+=dx[tmp],y+=dy[tmp];
                if(x>=0 && x<n && y>=0 && y<n)a[x][y]=res++;
            }
            tmp=(tmp+1)%4;
        }
        cnt++;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<a[i][j]<<" ";
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