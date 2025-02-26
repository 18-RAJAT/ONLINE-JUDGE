#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)cout<<(((i&(n-1))==i)?k:0)<<(i<n-1?" ":"\n");
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