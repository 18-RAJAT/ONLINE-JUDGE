#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,h,l;
    cin>>n>>h>>l;
    int a=0,b=0,c=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x<=h && x<=l)c++;
        else if(x<=h)a++;
        else if(x<=l)b++;
    }
    for(int i=n/2;~i;--i)
    {
        int ok=(i>a? i-a:0)+(i>b? i-b:0);
        if(ok<=c)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;
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