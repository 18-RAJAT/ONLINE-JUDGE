#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>p(n),q(n);
    for(int i=0;i<n;++i)cin>>p[i];
    for(int i=0;i<n;++i)q[i]=(n+1)-p[i];
    for(int i=0;i<n;++i)
    {
        if(i)cout<<" ";
        cout<<q[i];
    }
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