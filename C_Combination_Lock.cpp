#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;++i)cout<<n-i+1<<" ";
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