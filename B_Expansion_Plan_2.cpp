#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int c4=0,c8=0;
    for(auto& it:s)
    {
        c4+=it=='4',c8+=it=='8';
    }
    x=abs(x),y=abs(y);
    int dig=min(c8,min(x,y));
    x-=dig,y-=dig,c8-=dig;
    cout<<(x+y<=c4+c8?"YES":"NO")<<endl;
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