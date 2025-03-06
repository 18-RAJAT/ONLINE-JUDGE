#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,t;
    cin>>n>>t;
    int a[n+1];
    int cnt=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]==1)cnt++;
    }
    while(t--)
    {
        int x,u;
        cin>>x>>u;
        u--;
        if(x==1)
        {
            (a[u]==1)?(cnt--,a[u]=0):(a[u]=1,cnt++);
        }
        else
        {
            cout<<(u+1>cnt?0:1)<<endl;
        }
    }
}
signed main()
{
    sol();
    return 0;
}