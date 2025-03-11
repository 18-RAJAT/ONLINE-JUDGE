#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<(sum==n*x?"YES":"NO")<<endl;
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