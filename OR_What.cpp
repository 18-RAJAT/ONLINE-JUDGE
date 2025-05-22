#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n+1,0);
    vector<char>ch(n+1,0);
    for(int i=1;i<=n;++i)
    {
        if(ch[i] || (i&~x))continue;
        int j=x^i;
        if(j>=1 && j<=n && !ch[j] && (j&~x)==0 && j!=i)
        {
            a[i]=j,a[j]=i,ch[i]=ch[j]=1;
        }
    }
    if(x>=1 && x<=n && !ch[x])
    {
        a[x]=x,ch[x]=1;
    }
    int res=1;
    for(int i=1;i<=n;++i)
    {
        if(a[i]==0)
        {
            while(ch[res])res++;
            a[i]=res,ch[res]=1;
        }
    }
    for(int i=1;i<=n;++i)cout<<a[i]<<(i==n?"\n":" ");
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