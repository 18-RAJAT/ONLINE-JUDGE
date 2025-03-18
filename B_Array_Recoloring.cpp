#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n); 
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>b=a;
    ranges::sort(a,greater<>());
    if(k==1)
    {
        if(a[0]!=b[0] && a[0]!=b.back())
        {
            cout<<a[0]+max(b[0],b.back())<<endl;
            return;
        }
    }
    cout<<accumulate(a.begin(),a.begin()+k+1,0LL)<<endl;
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