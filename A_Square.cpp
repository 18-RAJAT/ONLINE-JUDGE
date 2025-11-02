#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int a[4];
    string ans="YES";
    for(int i=0;i<4;++i)
    {
        cin>>a[i];
        if(a[i]!=a[0])ans="NO";
    }
    cout<<ans<<endl;
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