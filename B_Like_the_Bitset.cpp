#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>ans(n);
    int l=1,r=n,ok=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='1')ans[i]=l++,ok++;else ans[i]=r--,ok=0;
        if(ok>=k)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;++i)cout<<ans[i]<<(i+1==n?'\n':' ');
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