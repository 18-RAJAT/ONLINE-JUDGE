#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    vector<vector<int>>ar(5,vector<int>(5,1));
    for(int i=1;i<=3;++i)
    {
        for(int j=1;j<=3;++j)
        {
            int k;
            cin>>k;
            for(int x=-1;x<=1;++x)
            {
                for(int y=-1;y<=1;++y)
                {
                    if(abs(x)+abs(y)<=1)ar[x+i][y+j]+=k;
                }
            }
        }
    }
    for(int i=1;i<=3;++i)
    {
        for(int j=1;j<=3;++j)cout<<(ar[i][j]%2);
        cout<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}