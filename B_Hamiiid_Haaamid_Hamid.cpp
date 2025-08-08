#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    s="#"+s;
    int f1=0,f2=n+1;
    for(int i=1;i<x;++i)if(s[i]=='#')f1=i;
    for(int i=n;i>x;--i)if(s[i]=='#')f2=i;
    cout<<max(min(f1+1,n-x+1),min(x,n-f2+2))<<endl;
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