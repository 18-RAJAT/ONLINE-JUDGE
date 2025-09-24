#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)cout<<n-i<<" ";
    cout<<n<<" ";
    for(int i=0;i<n-1;++i)cout<<i+1<<" ";
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