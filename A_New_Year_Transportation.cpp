#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0;i<n;++i)cin>>a[i];
    int i=0;
    while(i<t-1)i+=a[i];
    cout<<(i==t-1?"YES":"NO")<<endl;
}
signed main()
{
    sol();
    return 0;
}