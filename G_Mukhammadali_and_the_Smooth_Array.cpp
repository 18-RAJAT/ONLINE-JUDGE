#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),c(n),ar(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>c[i];
    int tot=0;
    for(int i=0;i<n;++i)tot+=c[i];
    for(int i=0;i<n;++i)ar[i]=c[i];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(a[j]<=a[i])ar[i]=max(ar[i],ar[j]+c[i]);
        }
    }
    cout<<tot-*max_element(ar.begin(),ar.end())<<endl;
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