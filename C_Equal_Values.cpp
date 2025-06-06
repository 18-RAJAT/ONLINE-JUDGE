#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=1e18,i=0;
    while(i<n)
    {
        int j=i;
        while(j+1<n && a[i]==a[j+1])j++;
        int tot=a[i]*(i+(n-1-j));
        ans=min(tot,ans);
        i=j+1;
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