#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,y,a;
    cin>>x>>y>>a;
    int ok=a/(x+y),res=ok*(x+y);
    cout<<(a<res+x?"NO":"YES")<<endl;
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