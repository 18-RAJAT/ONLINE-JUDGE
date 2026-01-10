#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int p,d;
    cin>>p>>d;
    int t=10,ans=p;
    while(d)
    {
        if(p%t!=t-1)
        {
            int tmp=p%t+1;
            if(tmp<=d)p-=tmp,d-=tmp;
            else break;
        }
        ans=p,t*=10;
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}