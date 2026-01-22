#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i)
    {
        int ok=1,tmp=-a[i];
        for(int j=i+1;j<n;++j)
        {
            int x=a[j]+tmp;
            if(x==ok)ok++;
        }
        ans=max(ans,ok);
    }
    cout<<ans<<endl;
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