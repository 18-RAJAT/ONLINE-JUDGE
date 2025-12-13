#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0,tmp=-n;
    for(int i=n-1;~i;--i)
    {
        if(s[i]=='1')
        {
            tmp=i-n;
            break;
        }
    }
    for(int i=0;i<n;++i)
    {
        (s[i]=='0')?ans=max(ans,i-tmp):tmp=i;
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