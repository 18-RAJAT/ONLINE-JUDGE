#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>b[i];
    int ans=2e9;
    for(int i=0;i<n;++i)
    {
        int sum=0;
        for(int j=0;j<b[i];++j)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        a[i]=15*b[i]+5*sum;
        ans=min(a[i],ans);
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}