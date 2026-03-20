#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int c=1,ans=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='U' || s[i]=='O' || s[i]=='Y')c=1;
        else c++;
        ans=max(ans,c);
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}