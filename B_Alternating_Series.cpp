#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        for(int i=0;i+2<n;i+=2)cout<<-1<<" "<<3<<" ";
        cout<<-1<<" "<<2<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)cout<<(i%2==0?-1:3)<<" ";
        cout<<endl;
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