#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=0;
    for(int i=1;i<n;++i)
    {
        (abs(a[i])<abs(a[0]))?l++:r++;
    }
    cout<<(l<=r+1?"YES":"NO")<<endl;
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