#include<bits/stdc++.h>
using namespace std;
#define int long long
int Prime(int x)
{
    if(x==1)return 0;
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)return 0;
    }
    return 1;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    int ok=1;
    if(k>=2)
    {
        if(n>=2)ok=0;
        else
        {
            int tmp=0;
            for(int i=0;i<k;++i)tmp*=10,tmp++;
            if(!Prime(tmp))ok=0;
        }
    }
    else
    {
        if(!Prime(n))ok=false;
    }
    cout<<(ok?"YES":"NO")<<endl;
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