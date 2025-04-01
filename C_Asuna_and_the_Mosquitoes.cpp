#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int o=count_if(a.begin(),a.end(),[](int x){return x&1;});
    int e=accumulate(a.begin(),a.end(),0LL);
    sort(a.begin(),a.end());
    cout<<(o==0 || o==n?a.back():e-o+1)<<endl;
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