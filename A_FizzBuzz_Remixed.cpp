#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int b=n/15,r=n%15,ans=b*3;
    if(r>=0)ans++;
    if(r>=1)ans++;
    if(r>=2)ans++;
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