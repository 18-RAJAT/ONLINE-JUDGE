#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    string s;
    cin>>n>>s;
    int ok=1;
    if(n%2==1 && s[0]=='b')ok=0;
    for(int i=(n&1)?2:1;i<n;i+=2)if(s[i]==s[i-1] && s[i]!='?')ok=0;
    cout<<(ok?"YES":"NO")<<endl;
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