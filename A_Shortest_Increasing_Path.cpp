#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,y;
    cin>>x>>y;
    if(x==y || x==y+1 || y==1){cout<<-1<<endl;return;}
    if(y>x){cout<<2<<endl;return;}
    cout<<3<<endl;
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