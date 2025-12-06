#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int cnt=0,ans=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='1')cnt=k;
        else
        {
            if(cnt==0)ans++;
            cnt--;
            cnt=max(cnt,0LL);
        }
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