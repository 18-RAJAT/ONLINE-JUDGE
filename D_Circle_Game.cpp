#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int d,k;
    cin>>d>>k;
    int res=sqrt(2)*d/k;
    cout<<(res%2?"Ashish":"Utkarsh")<<endl;
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