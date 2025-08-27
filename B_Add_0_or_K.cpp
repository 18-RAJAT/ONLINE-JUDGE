#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int cnt=2;
    while(__gcd(cnt,k)!=1)cnt++;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        while(a[i]%cnt)a[i]+=k;
        cout<<(i?" ":"")<<a[i];
    }
    cout<<endl;
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