#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n-1),b(n-1),c(n);
    for(int i=0;i<n-1;++i)cin>>a[i];
    for(int i=0;i<n-1;++i)cin>>b[i];
    for(int i=0;i<n;++i)cin>>c[i];
    vector<int>pref(n),suf(n);
    pref[0]=0;
    for(int i=1;i<n;++i)pref[i]=pref[i-1]+a[i-1];
    suf[n-1]=0;
    for(int i=n-2;~i;--i)suf[i]=suf[i+1]+b[i];
    multiset<int>ms;
    for(int i=0;i<n;++i)ms.insert(pref[i]+suf[i]+c[i]);
    auto it=ms.begin();
    int x=*it;++it;
    int y=*it;
    cout<<x+y;
}
signed main()
{
    sol();
    return 0;
}