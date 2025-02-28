#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;++i)cin>>b[i];
    int mx=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(b[j]%a[i]==0)
            {
                mx=max(b[j]/a[i],mx);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(b[j]%a[i]==0 && b[j]/a[i]==mx)ans++;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}