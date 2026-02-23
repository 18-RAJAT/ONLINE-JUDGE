#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0,z=0;
    for(int i=0;i<n;++i)if(s[i]=='1')o++;
    z=n-o;
    if(o%2==0)
    {
        cout<<o<<endl;
        for(int i=0;i<n;++i)if(s[i]=='1')cout<<i+1<<" ";
        cout<<endl;
    }
    else if(z%2==1)
    {
        cout<<z<<endl;
        for(int i=0;i<n;++i)if(s[i]=='0')cout<<i+1<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
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