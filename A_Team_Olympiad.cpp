#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    array<vector<int>,4>a;
    int k;
    for(int i=0;i<n;++i)
    {
        cin>>k;
        a[k].push_back(i+1);
    }
    int mn=min({a[1].size(),a[2].size(),a[3].size()});
    cout<<mn<<endl;
    for(int i=0;i<mn;++i)
    {
        cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}