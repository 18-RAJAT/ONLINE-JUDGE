#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<((x&y)==(y&z) && (x&y)==(z&x) && (z&x)==(y&z)?"YES":"NO")<<endl;
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