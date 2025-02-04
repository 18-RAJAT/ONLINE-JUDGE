#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    array<int,10>a{0};
    for(int i=0;i<10;++i)a[i]=(m*(i+1))%10,sum+=a[i];
    int div=n/m,ans=sum*(div/10);
    div%=10;
    for(int i=0;i<div;++i)ans+=a[i];
    cout<<ans<<endl;
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