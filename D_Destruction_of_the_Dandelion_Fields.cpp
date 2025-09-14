#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b;
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=a[i];
        if(a[i]%2)b.push_back(a[i]);
    }
    if(b.empty())cout<<0<<endl;
    else
    {
        sort(b.begin(),b.end());
        int res=0;
        for(int i=0;i<b.size()/2;++i)res+=b[i];
        cout<<sum-res<<endl;
    }
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