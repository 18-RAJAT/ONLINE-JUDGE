#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    cout<<2*(n-1)<<endl;
    for(int i=1;i<=n;++i)
    {
        if(i>=2)cout<<i<<" "<<1<<" "<<i<<endl;
        if(i<n)cout<<i<<" "<<i+1<<" "<<n<<endl;
    }
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