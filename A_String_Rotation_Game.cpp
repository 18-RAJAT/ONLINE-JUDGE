#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0,ok=0;
    for(int i=0;i<n;++i)
    {
        int j=i+1;
        if(j==n)j=0;
        (s[i]!=s[j])?x++:ok=1;
    }
    cout<<(ok?x+1:x)<<endl;
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