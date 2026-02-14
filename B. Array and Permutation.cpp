#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+5),ar(n);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a[x]=i;
    }
    for(int i=0;i<n;++i)
    {
        cin>>ar[i];
        ar[i]=a[ar[i]];
    }
    cout<<(is_sorted(ar.begin(),ar.end())?"YES":"NO")<<endl;
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