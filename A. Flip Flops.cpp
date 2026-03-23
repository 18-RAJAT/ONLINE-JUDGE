#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,c,k;
    cin>>n>>c>>k;
    vector<int>a;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i)
    {
        if(a[i]<=c)
        {
            int diff=c-a[i];
            c+=a[i]+min(diff,k),k-=min(diff,k);
        }
        else break;
    }
    cout<<c<<endl;
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