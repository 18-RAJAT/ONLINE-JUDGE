#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+5);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    int res=0;
    res+=count(a.begin(),a.begin()+k,0);
    cout<<max(res,a[k])<<endl;
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