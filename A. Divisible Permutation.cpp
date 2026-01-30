#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int l=1,r=n;
    for(int i=0;i<n;++i)(i&1)?a[n-i-1]=l++:a[n-i-1]=r--;
    for(int i=0;i<n;++i)cout<<a[i]<<" ";
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