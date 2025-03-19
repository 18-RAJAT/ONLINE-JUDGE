#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>arr(n);
    for(int i=0;i<n;++i)cin>>arr[i];
    deque<int>ar(n+1,0),br(n+1,0);
    for(int i=0;i<n;++i)
    {
        ar[i+1]=ar[i]+(arr[i]<a?1:(arr[i]>a?-1:0));
        br[i+1]=br[i]+(arr[i]<b?1:(arr[i]>b?-1:0));
    }
    int chk=(a<b?1:(a>b?-1:0)),ans=0;
    for(int i=0;i<=n;++i)
    {
        for(int j=i+1;j<=n+1;++j)
        {
            if(ar[i]>br[j-1]+chk)ans++;
        }
    }
    for(int j=0;j<=n;++j)
    {
        for(int i=j+1;i<=n+1;++i)
        {
            if(ar[i-1]-chk>br[j])ans++;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}