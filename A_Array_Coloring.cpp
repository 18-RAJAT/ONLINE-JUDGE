#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    int ok=1;
    for(int i=1;i<n;++i)
    {
        if((a[i].second&1)==(a[i-1].second&1))ok=0;
    }
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