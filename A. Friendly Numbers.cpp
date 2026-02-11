#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=0;
    auto recur=[&](int x)->int
    {
        int tmp=x;
        int sum=0;
        while(tmp>=1)
        {
            sum+=(tmp%10);
            tmp/=10;
        }
        return sum;
    };
    for(int i=500;~i;--i)if(n+i-recur(n+i)==n)ans++;
    cout<<ans<<endl;
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