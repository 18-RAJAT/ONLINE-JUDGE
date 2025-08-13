#include<bits/stdc++.h>
using namespace std;
#define int long long
int mx=0,mn=0;
void sol()
{
    int l,r;
    char ch;
    cin>>ch>>l>>r;
    if(ch=='+')mx=max(mx,max(l,r)),mn=max(mn,min(l,r));
    else cout<<(((mx<=l && mn<=r) || (mx<=r && mn<=l))?"YES":"NO")<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)sol();
    return 0;
}