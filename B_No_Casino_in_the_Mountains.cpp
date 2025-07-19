#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int z=0,ans=0,ok=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(ok)
        {
            ok=0;
            continue;
        }
        (!x)?z++:z=0;
        if(z==k)
        {
            ans++;z=0;ok=1;
        }
    }
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