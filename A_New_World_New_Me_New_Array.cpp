#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k,p;
    cin>>n>>k>>p;
    k=abs(k);
    if(n*p<k)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<(k+p-1)/p<<endl;
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