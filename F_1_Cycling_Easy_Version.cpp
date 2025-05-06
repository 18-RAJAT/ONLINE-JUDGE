#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+5);
    for(int i=1;i<=n;++i)cin>>a[i];
    vector<int>b=a;
    int ans=0;
    for(int i=n;i>=1;--i)
    {
        int tmp=b[i],res=-1;
        for(int j=i+1;j<=n;++j)
        {
            int cost=b[j]+(j-i);
            if(cost<tmp)tmp=cost,res=j;
        }
        if(res<0)ans+=b[i];
        else ans+=tmp,b[res]=b[i],b[i]=b[res];
    }
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