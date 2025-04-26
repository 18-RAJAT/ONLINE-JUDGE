#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;++i)
    {
        if(i!=x)cout<<i<<" ";
    }
    if(n==x)cout<<endl;
    else cout<<x<<endl;
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