#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    if(n<k)
    {
        cout<<-1;
        return;
    }
    cout<<a[n-k]<<" "<<a[n-k];
}
signed main()
{
    sol();
    return 0;
}