#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<m-1;++j)
        {
            int sum=0,prod=1;
            sum+=a[i][j],sum+=a[i+1][j+1],sum+=a[i+1][j],sum+=a[i][j+1];
            prod*=a[i][j],prod*=a[i+1][j+1],prod*=a[i+1][j],prod*=a[i][j+1];
            if(sum=='a'+'c'+'e'+'f' && prod=='a'*'c'*'e'*'f')ans++;
        }
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}