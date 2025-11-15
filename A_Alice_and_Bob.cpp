#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,a;
    cin>>n>>a;
    vector<int>ar(n);
    int x=0,y=0;
    for(int i=0;i<n;++i)
    {
        cin>>ar[i];
        x+=(ar[i]>a),y+=(ar[i]<a);
    }
    cout<<(x>y?a+1:a-1)<<endl;
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