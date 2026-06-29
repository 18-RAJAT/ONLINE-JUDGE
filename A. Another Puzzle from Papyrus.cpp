#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,c;
    cin>>n>>c;
    vector<int>a(n),b(n);
    for(auto& it:a)cin>>it;
    for(auto& it:b)cin>>it;
    int ans=1e9,sum=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]<b[i])
        {
            sum=1e9;
            break;
        }
        sum+=a[i]-b[i];
    }
    ans=sum;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sum=c;
    for(int i=0;i<n;++i)
    {
        if(a[i]<b[i])
        {
            sum=1e9;
            break;
        }
        sum+=a[i]-b[i];
    }
    ans=min(ans,sum);
    if(ans==1e9)ans=-1;
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