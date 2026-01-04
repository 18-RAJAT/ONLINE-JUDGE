#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(auto& it:a)cin>>it;
    for(auto& it:b)cin>>it;
    for(auto& it:c)cin>>it;
    int x=0,y=0;
    for(int i=0;i<n;++i)
    {
        int ok=1;
        for(int j=0;j<n;++j)
        {
            if(!(a[j]<b[(j+i)%n])){ok=0;break;}
        }
        if(ok)x++;
    }
    for(int i=0;i<n;++i)
    {
        int ok=1;
        for(int j=0;j<n;++j)
        {
            if(!(b[j]<c[(j+i)%n])){ok=0;break;}
        }
        if(ok)y++;
    }
    cout<<n*x*y<<endl;
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