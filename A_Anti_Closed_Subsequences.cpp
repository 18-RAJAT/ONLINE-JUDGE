#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        int bit=64-__builtin_clzll(a[i]);
        cout<<bit<<(i+1==n?"\n":" ");
    }
}
signed main()
{
    sol();
    return 0;
}