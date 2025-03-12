#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int l,r,d,u;
    cin>>l>>r>>d>>u;
    cout<<((l==r && r==d && d==u)?"Yes":"No")<<endl;
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