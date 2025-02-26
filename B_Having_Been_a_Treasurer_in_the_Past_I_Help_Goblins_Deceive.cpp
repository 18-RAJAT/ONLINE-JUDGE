#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0,y=0;
    for(auto& it:s)
    {
        (it=='-')?x++:y++;
    }
    if(x<2 || !y)
    {
        cout<<0<<endl;
        return;
    }
    cout<<(x/2)*(x-x/2)*y<<endl;
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