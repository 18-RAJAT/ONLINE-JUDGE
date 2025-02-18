#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1,0);
    for(int i=2;i<=n-1;++i)cin>>a[i];
    vector<array<int,4>>ar(n+1);
    for(int i=0;i<4;++i)ar[1][i]=1;
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<2;++j)ar[2][i*2+j]=1;
    }
    for(int i=2;i<=n-1;++i)
    {
        for(int j=0;j<4;++j)
        {
            if(!ar[i][j])continue;
            int x=j/2,y=j%2;
            for(int k=0;k<2;++k)
            {
                int tmp=(a[i]==1?(x==y && y==k):!(x==y && y==k));
                if(tmp)ar[i+1][y*2+k]=1;
            }
        }
    }
    int ok=0;
    for(int i=0;i<4;++i)if(ar[n][i]){ok=1;break;}
    cout<<(ok?"YES":"NO")<<endl;
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