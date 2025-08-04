#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    long double u,a,b,c,d;
    cin>>u>>a>>b>>c>>d;
    cout<<ceil((sqrt((a-c)*(a-c)+(b-d)*(b-d)))/(2*u))<<endl;
}
signed main()
{
    sol();
    return 0;
}