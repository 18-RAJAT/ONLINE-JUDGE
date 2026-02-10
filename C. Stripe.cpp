#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0,ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
        a[i]=sum;
    }
    for(int i=0;i<n-1;++i)
    {
        if(sum-a[i]==a[i])ans++;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}