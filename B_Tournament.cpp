#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,j,k;
    cin>>n>>j>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(k>=2)
    {
        cout<<"YES"<<endl;
        return;
    }
    int ok=1;
    for(int i=0;i<n;++i)
    {
        if(a[i]>a[j-1])
        {
            ok=0;
            break;
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
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