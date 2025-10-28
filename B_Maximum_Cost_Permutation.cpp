#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),ar(n+1);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i])ar[a[i]]=1;
    }
    vector<int>res;
    for(int i=1;i<=n;++i)
    {
        if(!ar[i])res.push_back(i);
    }
    for(int i=0;i<n;++i)
    {
        if(a[i]==0)
        {
            a[i]=res.back();
            res.pop_back();
        }
    }
    int l=0,r=n-1;
    while(l<n && a[l]==l+1)l++;
    while(r>=0 && a[r]==r+1)r--;
    cout<<max(0LL,r-l+1)<<endl;
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