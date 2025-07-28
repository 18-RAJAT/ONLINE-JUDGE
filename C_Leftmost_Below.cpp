#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ok=1,mn=a[0];
    for(int i=1;i<n;++i)
    {
        int tmp=(a[i]>>1)+1;
        if(mn<tmp)
        {
            ok=0;
            break;
        }
        mn=min(mn,a[i]);
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