#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a(n);
    int mx=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int l=0,r=mx,ans=r;
    while(l<=r)
    {
        int m=l+(r-l)/2,cnt=0,id=0;
        while(id<n)
        {
            if(s[id]=='R' && a[id]>m)
            {
                id++;
                continue;
            }
            int j=id,ok=0;
            while(j<n && !(s[j]=='R' && a[j]>m))// && !(s[j]=='B' && a[j]>m))
            {
                // cout<<"chk-> "<<s[j]<<endl;
                if(s[j]=='B' && a[j]>m)ok=1;
                j++;
            }
            // while(id<j && s[id]=='B' && a[id]<=m)id++; //again chk
            if(ok)cnt++;
            assert(j<=n);
            id=j;
        }
        (cnt<=k)?(ans=m,r=m-1):(l=m+1);
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