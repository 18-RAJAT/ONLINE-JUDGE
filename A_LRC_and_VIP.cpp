#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int f=0;
    for(int i=0;i<n;++i)
    {
        int g=a[i],ok=0;
        for(int j=0;j<n;++j)
        {
            if(j==i)continue;
            (ok==0)?ok=a[j]:ok=__gcd(ok,a[j]);
        }
        if(g!=ok)
        {
            b[i]=1;
            for(int j=0;j<n;++j)
            {
                if(i!=j)b[j]=2;
            }
            f=1;
            break;
        }
    }
    if(!f)cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<n;++i)cout<<b[i]<<(i==n-1?"\n":" ");
    }
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