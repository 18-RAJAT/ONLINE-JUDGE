#include<bits/stdc++.h>
using namespace std;
#define int long long
int ar[1000005];
void sol()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a*b*c;++i)
    {
        for(int j=i;j<=a*b*c;j+=i)
        {
            ar[j]++;
        }
    }
    int ans=0;
    for(int i=1;i<=a;++i)
    {
        for(int j=1;j<=b;++j)
        {
            for(int k=1;k<=c;++k)
            {
                ans=(ans+ar[i*j*k])%1073741824;
            }
        }
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}