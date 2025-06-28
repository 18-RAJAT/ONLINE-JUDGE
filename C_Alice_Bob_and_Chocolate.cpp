#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=n-1,cnt1=0,cnt2=0;
    while(l<=r)
    {
        if(l==r && cnt1==cnt2)cnt1+=a[l++];
        else if(cnt1<=cnt2)cnt1+=a[l++];
        else cnt2+=a[r--];
    }
    cout<<l<<" "<<n-r-1;
}
signed main()
{
    sol();
    return 0;
}