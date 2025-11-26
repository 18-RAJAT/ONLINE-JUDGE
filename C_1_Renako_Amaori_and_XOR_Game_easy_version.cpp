#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;cin>>n;
    vector<int>a(n),b(n);
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
        sum+=b[i];
    }
    if(sum%2==0)
    {
        cout<<"Tie"<<endl;
        return;
    }
    for(int i=n-1;~i;--i)
    {
        if(a[i]!=b[i])
        {
            cout<<(i&1?"Mai":"Ajisai")<<endl;
            return;
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