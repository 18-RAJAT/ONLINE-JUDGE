#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto& it:a)cin>>it;
    vector<int>ar(n+1);
    for(int i=0;i<n;++i)ar[a[i]]=i;
    int ok=1;
    while(ok)
    {
        ok=0;
        for(int i=1;i+2<=n;++i)
        {
            int x=ar[i],y=ar[i+1],z=ar[i+2];
            while(z<x && z<y)
            {
                a[z]-=2;
                a[x]+=1;
                a[y]+=1;
                swap(ar[i],ar[i+2]);
                swap(ar[i+1],ar[i+2]);
                ar[i]=z;
                ar[i+1]=x;
                ar[i+2]=y;
                ok=1;
                x=ar[i];
                y=ar[i+1];
                z=ar[i+2];
                if(a[z]<0)break;
            }
        }
    }
    for(int i=0;i<n;++i)cout<<(i?" ":"")<<a[i];
    cout<<endl;
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