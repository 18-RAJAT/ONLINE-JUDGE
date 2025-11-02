#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int o=0,e=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        (a[i]&1)?o++:e++;
    }
    if(o && e)sort(a.begin(),a.end());
    for(int i=0;i<n;++i)cout<<a[i]<<" ";
    cout<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}