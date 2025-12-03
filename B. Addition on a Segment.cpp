#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int sum=0,res=0;
    vector<int>a(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i])res++;
    }
    cout<<min(res,sum-n+1)<<endl;
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