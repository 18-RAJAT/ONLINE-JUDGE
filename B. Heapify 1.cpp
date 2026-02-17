#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    int ok=1;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        int j=i;
        while(j%2==0)j/=2;
        while(a[i]%2==0)a[i]/=2;
        if(a[i]!=j)ok=0;
    }
    cout<<(ok?"YES":"NO")<<endl;
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