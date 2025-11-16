#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int g,c,l;
    cin>>g>>c>>l;
    int mx=max({g,c,l}),mn=min({g,c,l});
    if(mx-mn>=10)cout<<"check again";
    else
    {
        int a[3]={g,c,l};
        sort(a,a+3);
        cout<<"final "<<a[1];
    }
}
signed main()
{
    sol();
    return 0;
}