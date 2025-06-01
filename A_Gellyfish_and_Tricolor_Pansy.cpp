#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(min(a,c)>=min(b,d)?"Gellyfish":"Flower")<<endl;
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