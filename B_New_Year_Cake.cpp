#include"bits/stdc++.h"
using namespace std;
#define int long long
int check(int x,int y)
{
    int ans=1,cnt=0;
    for(int i=1;i<=x;i<<=1)
    {
        cnt++,x-=i,ans<<=1;
        swap(x,y);
    }
    return cnt;
}
void sol()
{
    int a,b;
    cin>>a>>b;
    int ans=max(check(a,b),check(b,a));
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