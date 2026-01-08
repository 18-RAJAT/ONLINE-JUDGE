#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<char>a(n,0);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a[x]|=(x<=n);
    }
    int ans=0;
    while(ans<=n && a[ans])ans++;
    cout<<min(k-1,ans)<<endl;
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