#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    vector<int>ar(n+1);
    ar[0]=0;
    for(int i=0;i<n;++i)ar[i+1]=ar[i]+b[i];
    vector<int>tmp=a;
    sort(tmp.begin(),tmp.end());
    int ans=0,i=0;
    while(i<n)
    {
        int res=tmp[i];
        int j=i;
        while(j<n && tmp[j]==res)j++;
        int UB=upper_bound(ar.begin(),ar.end(),n-i)-ar.begin()-1;
        ans=max(ans,res*UB);
        i=j;
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