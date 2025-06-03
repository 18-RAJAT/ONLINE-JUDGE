#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int start=1,end=INT_MAX,ans=1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int mn=min(m,mid),calc=mid-mn;
        int tot=n-mn-calc*(calc+1)/2;
        (tot<=0)?ans=mid,end=mid-1:start=mid+1;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}