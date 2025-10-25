#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='B')cnt++;
    }
    while(q--)
    {
        int a;
        cin>>a;
        int ans=0,i=0;
        if(cnt==0)
        {
            cout<<a<<endl;
            continue;
        }
        while(a>0)
        {
            ans++;
            if(s[i]=='A')a--;
            else a/=2;
            i=(i+1)%n;
        }
        cout<<ans<<endl;
    }
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