#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,s,x;
    cin>>n>>s>>x;
    int tot=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        tot+=x;
    }
    if(s<tot)cout<<"NO"<<endl;
    else cout<<(((s-tot)%x==0)?"YES":"NO")<<endl;
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