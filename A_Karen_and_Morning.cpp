#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int h;
    cin>>h;
    char ch;
    cin>>ch;
    int m;
    cin>>m;
    int ans=0;
    while(h/10!=m%10 || h%10!=m/10)
    {
        m++;
        if(m==60)m=0,h++;
        if(h==24)h=0;
        ans++;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}