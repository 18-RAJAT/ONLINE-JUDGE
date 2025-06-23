#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    int mx=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];
            mx=max(mx,a[i][j]);
        }
    }
    vector<int>r(n),c(m);
    int tot=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(a[i][j]==mx)
            {
                r[i]++,c[j]++,tot++;
            }
        }
    }
    int ok=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(r[i]+c[j]==tot+(a[i][j]==mx))
            {
                ok=1;
                break;
            }
        }
    }
    cout<<((ok)?mx-1:mx)<<endl;
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