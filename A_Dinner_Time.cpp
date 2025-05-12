#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    cout<<((n%p==0 && n/p*q!=m)?"NO":"YES")<<endl;
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