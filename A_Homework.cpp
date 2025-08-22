#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int m;
    cin>>m;
    string b,c;
    cin>>b>>c;
    for(int i=0;i<m;++i)
    {
        (c[i]=='V')?a=b[i]+a:a+=b[i];
    }
    cout<<a<<endl;
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