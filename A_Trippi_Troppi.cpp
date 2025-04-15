#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    array<string,3>a;
    for(int i=0;i<3;++i)cin>>a[i];
    cout<<a[0][0]<<a[1][0]<<a[2][0]<<endl;
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