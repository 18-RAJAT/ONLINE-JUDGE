#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string a,b,c;
    cin>>a>>b>>c;
    a=a+b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    cout<<((a==c)?"YES":"NO")<<endl;
}
signed main()
{
    sol();
    return 0;
}