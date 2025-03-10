#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    for(int i=1;i<=d;++i)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}