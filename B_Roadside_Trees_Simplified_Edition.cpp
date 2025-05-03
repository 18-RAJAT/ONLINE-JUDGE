#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int check=0,ans=0;
    for(int i=0;i<n;++i)
    {
        ans+=abs(a[i]-check)+1+(i<n-1);
        check=a[i];
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}