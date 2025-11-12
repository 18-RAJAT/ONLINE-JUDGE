#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    int mn=1,mx=1;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]<a[mn])mn=i;
        if(a[i]>a[mx])mx=i;
    }
    string s;
    cin>>s;
    s="."+s;
    if(s[1]=='1' || s[n]=='1' || s[mn]=='1' || s[mx]=='1')
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<5<<endl;
    for(auto& it:vector<int>{1,n})
    {
        cout<<min(it,mn)<<" "<<max(it,mn)<<endl;
        cout<<min(it,mx)<<" "<<max(it,mx)<<endl;
    }
    cout<<min(mn,mx)<<" "<<max(mn,mx)<<endl;
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