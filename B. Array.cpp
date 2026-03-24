#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        int c1=0,c2=0;
        for(int j=i+1;j<n;++j)
        {
            if(a[j]>a[i])c1++;
            else if(a[j]<a[i])c2++;
        }
        cout<<max(c1,c2)<<" ";
    }
    cout<<endl;
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