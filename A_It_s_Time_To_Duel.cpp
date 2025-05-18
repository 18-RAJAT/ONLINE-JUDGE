#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int sum=0;
    vector<int>a(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(n-1<sum)
    {
        cout<<"YES"<<endl;
        return;
    }
    int ok=0;
    for(int i=0;i<n-1;++i)
    {
        if(a[i]==0 && a[i+1]==0)
        {
            ok=1;
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