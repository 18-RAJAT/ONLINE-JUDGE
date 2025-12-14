#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j+i<=n;++j)
        {
            cout<<j<<" "<<j+i<<endl;
            cout.flush();
            int x;
            cin>>x;
            if(x)return;
        }
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