#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    int sum=0;
    for(int i=0;i<n;++i)sum+=min(a[i],b[i]);
    while(q--)
    {
        char c;
        int x,v;
        cin>>c>>x>>v;
        x--;
        sum-=min(a[x],b[x]);
        (c=='A'?a[x]=v:b[x]=v);
        sum+=min(a[x],b[x]);
        cout<<sum<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}