#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    double r,h;
    cin>>r>>h;
    h+=r/2;
    int ans=h/r;
    double PI=acos(-1),check=(ans-1)*r+r/2+r*sin(PI/3);
    ans=(check<h?ans*2+1:ans*2);
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}