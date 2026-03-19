#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,a,b,ans1=0,ans2=0;
    cin>>n;
    for(int i=0;i<n;++i)cin>>a,ans1|=a;
    for(int i=0;i<n;++i)cin>>b,ans2|=b;
    cout<<ans1+ans2<<endl;
}
signed main()
{
    sol();
    return 0;
}