#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    cout<<(n&1?-(n/2+1):n/2);
}
signed main()
{
    sol();
    return 0;
}