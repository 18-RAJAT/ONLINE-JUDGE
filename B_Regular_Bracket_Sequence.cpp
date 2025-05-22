#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size(),c=0,ct=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='(')c++;
        else
        {
            (c>0)?c--:ct++;
        }
    }
    ct+=c;
    cout<<n-ct;
}
signed main()
{
    sol();
    return 0;
}