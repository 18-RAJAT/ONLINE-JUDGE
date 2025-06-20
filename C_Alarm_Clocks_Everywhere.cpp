#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)cin>>b[i];
    int G=0;
    for(int i=1;i<n;++i)G=__gcd(G,a[i]-a[i-1]);
    for(int i=0;i<m;++i)
    {
        if(G%b[i]==0)
        {
            cout<<"YES"<<endl;
            if(a[0]-b[i]<=0)cout<<a[0]<<" "<<i+1<<endl;
            else cout<<a[0]-b[i]<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
signed main()
{
    sol();
    return 0;
}