#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]*a[1]==a[2])cout<<"Yes";
    else cout<<"No";
}
signed main()
{
    sol();
    return 0;
}