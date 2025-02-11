#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x,y;
    cin>>x>>y;
    cout<<((x+1>=y && (x+1-y)%9==0)?"Yes":"No")<<endl;
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