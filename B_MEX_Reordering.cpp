#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(2);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x<2)a[x]++;
    }
    cout<<((a[0]==0)?"NO":(a[0]==1)?"YES":(a[1]==0)?"NO":"YES")<<endl;
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