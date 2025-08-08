#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int f=-2,ok=1;
    for(int i=0;i<n;++i)
    {
        if(a[i]==-1)continue;
        if(f==-2)f=a[i];
        else if(a[i]!=f)
        {
            ok=0;
            break;
        }
    }
    if(ok)
    {
        cout<<(f==-2 || f>=1?"YES":"NO")<<endl;
    }
    else cout<<"NO"<<endl;
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