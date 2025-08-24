#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(105,0);
    int ok=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(++a[x]>=2)ok=1;
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