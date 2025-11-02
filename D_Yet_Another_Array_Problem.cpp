#include"bits/stdc++.h"
using namespace std;
#define int long long
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=2;i<=1e6;++i)
    {
        int ok=1;
        for(auto& it:a)
        {
            if(gcd(it,i)==1)
            {
                if(ok)
                {
                    cout<<i<<endl;
                    return;
                }
            }
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}