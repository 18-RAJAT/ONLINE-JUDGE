#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string ans="";
    for(int i=0;i<n;++i)
    {
        string x;
        cin>>x;
        string l=x+ans,r=ans+x;
        (l<r)?ans=l:ans=r;
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