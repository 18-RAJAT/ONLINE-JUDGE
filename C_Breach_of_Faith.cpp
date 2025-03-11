#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(2*n);
    int sum=0;
    for(int i=0;i<2*n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    int res=0;
    for(int i=n-1;i<2*n;++i)res+=a[i];
    for(int i=0;i<=2*n;++i)
    {
        cout<<(!(i&1)?a[n-1+(i>>1)]:((i>>1)==(n-1)?(res<<1)-sum:a[i>>1]))<<" ";
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