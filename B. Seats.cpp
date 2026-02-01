#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0,cnt=1;
    for(int i=0;i<n;++i)
    {
        (s[i]=='0')?cnt++:(ans+=cnt/3,cnt=0,ans++);
    }
    (ans!=0)?ans+=(cnt+1)/3:ans=(n+2)/3;
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