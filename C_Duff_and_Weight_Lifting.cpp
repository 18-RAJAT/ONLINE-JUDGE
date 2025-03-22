#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e6;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(N+1),b;
    b.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
        a[b[i]]++;
    }
    int ans=0;
    for(int i=0;i<=N;++i)
    {
        if(a[i]&1)ans++;
        a[i+1]+=a[i]/2;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}