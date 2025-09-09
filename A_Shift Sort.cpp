#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ss=s;
    sort(ss.begin(),ss.end());
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]!=ss[i])ans++;
    }
    cout<<ans/2<<endl;
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