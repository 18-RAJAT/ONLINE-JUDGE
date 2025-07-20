#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<array<int,4>>a(n);
    for(int i=0;i<n;++i)cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3]; 
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(a[i][3]<a[i][1])ans+=min(a[i][0],a[i][2]);
        if(a[i][3]>a[i][1])ans+=a[i][3]-a[i][1];
        if(a[i][0]<a[i][2])ans+=a[i][2]-a[i][0];
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