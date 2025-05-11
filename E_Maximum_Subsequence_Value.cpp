#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        {
            for(int k=j;k<n;++k)
            {
                ans=max(ans,a[i]|a[j]|a[k]);
            }
        }
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}