#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}