#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>pref(n+1),suf(n+1);
    for(int i=1;i<=n;++i)pref[i]=pref[i-1]+a[i-1];
    for(int i=n-1;~i;--i)suf[i]=suf[i+1]+a[i];
    if(k*suf[0]<x)
    {
        cout<<0<<endl;
        return;
    }
    int ans=0;
    for(int j=0;j<n;++j)
    {
        int tmp=suf[j];
        if(x<=tmp)ans+=k;
        else
        {
            int rem=x-tmp,res=(rem+suf[0]-1)/suf[0];
            if(res<k)ans+=(k-res);
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