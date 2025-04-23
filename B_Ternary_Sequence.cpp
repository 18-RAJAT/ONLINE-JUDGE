#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x1,y1,z1,x2,y2,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    cout<<2*min(min(z1,y2),x2+y2-y1)<<endl;
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