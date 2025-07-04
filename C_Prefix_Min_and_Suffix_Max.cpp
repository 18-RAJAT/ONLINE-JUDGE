#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>pref(n),suf(n);
    for(int i=0;i<n;++i)pref[i]=min(a[i],(i?pref[i-1]:INT_MAX));
    for(int i=n-1;~i;--i)suf[i]=max(a[i],(i+1<n?suf[i+1]:0));
    for(int i=0;i<n;++i)
    {
        cout<<((a[i]==pref[i]||a[i]==suf[i])?1:0);
    }
    cout<<endl;
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