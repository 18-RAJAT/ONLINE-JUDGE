#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    int mid=n/2,i;
    for(i=mid+1;i<n;++i)
    {
        int req=(a[i]-a[i-1])*(i-mid);
        if(k<req)break;
        k-=req;
    }
    int cnt=i-mid,res=(i==n?a[n-1]:a[i-1]);
    cout<<res+k/cnt;
}
signed main()
{
    sol();
    return 0;
}