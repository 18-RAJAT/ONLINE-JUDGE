#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int mn=min_element(a.begin(),a.end())-a.begin();
    cout<<(count(a.begin(),a.end(),a[mn])<=1?to_string(mn+1):"Still Rozdil");
}
signed main()
{
    sol();
    return 0;
}