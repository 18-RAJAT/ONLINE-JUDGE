#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b(n);
    b[0]=a[0];
    for(int i=1;i<n;++i)b[i]=max(a[i],b[i-1]);
    int ans=0;
    for(int i=n-1;~i;--i)cout<<(ans+=a[i])-a[i]+b[i]<<" ";
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