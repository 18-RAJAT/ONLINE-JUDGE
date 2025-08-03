#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    cout<<s.substr(a,n-a-b)<<endl;
}
signed main()
{
    sol();
    return 0;
}