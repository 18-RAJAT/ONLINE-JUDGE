#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        x%=k;
        a[i]=min(x,k-x);
    }
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        x%=k;
        b[i]=min(x,k-x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout<<(a==b?"Yes":"No")<<endl;
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