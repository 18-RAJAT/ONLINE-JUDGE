#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k-3;++i)cout<<1<<" ";
    n=n-(k-3);
    if(n%2)cout<<1<<" "<<n/2<<" "<<n/2<<endl;
    else
    {
        if(n%4==0)cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        else cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
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