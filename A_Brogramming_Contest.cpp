#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ok=0;
    for(int i=1;i<n;++i)if(s[i]!=s[i-1])ok++;
    cout<<ok+(s[0]=='1'?1:0)<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)sol();
    return 0;
}