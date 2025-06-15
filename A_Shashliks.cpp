#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    int ans=0;
    for(int i=0;i!=2;++i)
    {
        int c1=0,c2=0,res=k;
        int r1=(i==0?a:b),d1=(i==0?x:y);
        int r2=(i==0?b:a),d2=(i==0?y:x);
        if(r1<=res)
        {
            c1=(res-r1)/d1+1,res-=c1*d1;
        }
        if(r2<=res)
        {
            c2=(res-r2)/d2+1,res-=c2*d2;
        }
        ans=max(ans,c1+c2);
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