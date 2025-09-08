#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b;
    cin>>a>>b;
    if(b%2==0)
    {
        cout<<((b&3)?((a%2)?-1:a*(b/2)+2):a*(b/2)+2)<<endl;
    }
    else
    {
        cout<<((a%2)?a*b+1:-1)<<endl;
    }
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