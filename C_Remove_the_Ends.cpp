#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int x,y,z;
    x=y=z=0;
    for(auto& it:a)
    {
        if(it<0)y+=-it;
    }
    int l=-1,r=-1;
    for(int i=0;i<n;++i)if(a[i]>0){l=i;break;}
    for(int i=n-1;~i;--i)if(a[i]>0){r=i;break;}
    if(l==-1)
    {
        cout<<y<<endl;
        return;
    }
    for(int i=l;i<n;++i)if(a[i]>0)z+=a[i];
    int sum=0,res=0;
    for(int i=l;i<=r;++i)if(a[i]>0)sum+=a[i];
    for(int i=r+1;i<n;++i)if(a[i]<0)res+=-a[i];
    x=sum+res;
    cout<<max({x,y,z})<<endl;
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