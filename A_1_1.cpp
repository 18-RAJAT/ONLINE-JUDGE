#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mn=0,mx=0;
    if(s[0]=='1')mn++,mx++;
    for(int i=1;i<n-1;++i)
    {
        if(s[i]=='1')mx++;
        if(s[i]=='0' && (s[i-1]=='1' && s[i+1]=='1'))s[i]='1',mx++;
    }
    if(s[n-1]=='1')mn++,mx++;
    for(int i=1;i<n-1;++i)
    {
        if(s[i]=='1')(s[i-1]=='1' && s[i+1]=='1')?s[i]='0':mn++;
    }
    cout<<mn<<" "<<mx<<endl;
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