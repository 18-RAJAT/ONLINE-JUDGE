#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1),b(n+1);
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    int i=1;
    while(i<=n && a[i]==n-i+1)i++;
    if(i<=n)
    {
        reverse(a.begin()+i,a.begin()+b[n-i+1]+1);
    }
    for(int i=1;i<=n;++i) cout<<a[i]<<" ";
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