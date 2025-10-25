#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>fz(n+1,0);
    for(auto& it:a)if(it<=n)fz[it]++;
    vector<int>pref(n+1,0);
    for(int i=1;i<=n;++i)pref[i]=pref[i-1]+fz[i];
    int ans=1;
    for(int i=n;i>=1;--i)
    {
        int cnt=0;
        if(i>1)
        {
            int l=1,r=i-1;
            if(r>n)r=n;
            if(l<=r)cnt+=pref[r]-pref[l-1];
        }
        int l1=i,r1=2*i-1;
        if(r1>n)r1=n;
        if(l1<=r1)
        {
            int c1=pref[r1]-pref[l1-1];
            int mul=(i<=n)?fz[i]:0;
            cnt+=(c1-mul);
        }
        int l2=2*i,r2=3*i-1;
        if(r2>n)r2=n;
        if(l2<=r2)
        {
            int c2=pref[r2]-pref[l2-1];
            int mul=(2*i<=n)?fz[2*i]:0;
            cnt+=(c2-mul);
        }
        int l3=3*i,r3=4*i-1;
        if(r3>n)r3=n;
        if(l3<=r3)
        {
            int c3=pref[r3]-pref[l3-1];
            int mul=(3*i<=n)?fz[3*i]:0;
            cnt+=(c3-mul);
        }
        if(cnt<=k)
        {
            ans=i;
            break;
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