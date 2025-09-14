#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b(n+1);
    for(int i=0;i<n;++i)b[a[i]]++;
    for(int i=1;i<=n;++i)
    {
        if(b[i]%k)
        {
            cout<<0<<endl;
            return;
        }
    }
    vector<int>ar(n+1),br(n+1);
    for(int i=1;i<=n;++i)ar[i]=b[i]/k;
    int j=0,ans=0;
    for(int i=0;i<n;++i)
    {
        int x=a[i];
        br[x]++;
        while(ar[x]<br[x])
        {
            br[a[j]]--,j++;
        }
        ans+=i-j+1;
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