#include<bits/stdc++.h>
using namespace std;
#define int long long
int check(vector<string>& a,int i,int j,int n,int m)
{
    int r=1,c=1;
    for(int k=0;k<i;++k)if(a[k][j]=='0')r=0;
    for(int k=0;k<j;++k)if(a[i][k]=='0')c=0;
    return r || c;
}
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=1;i<n;++i)
    {
        for(int j=1;j<m;++j)
        {
            if(a[i][j]=='1' && !check(a,i,j,n,m))
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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