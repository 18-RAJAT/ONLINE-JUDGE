#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int ok=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(i)ok|=(a[i]<a[i-1]);
    }
    cout<<(ok?1:n)<<endl;
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