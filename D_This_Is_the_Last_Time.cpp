#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<array<int,3>>a(n);
    for(int i=0;i<n;++i)cin>>a[i][0]>>a[i][1]>>a[i][2];
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i)
    {
        if(a[i][0]<=k && k<=a[i][1])k=max(k,a[i][2]);
    }
    cout<<k<<endl;
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