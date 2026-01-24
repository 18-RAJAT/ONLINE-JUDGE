#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,x;
    cin>>n>>x;
    int res=0,chk=LLONG_MIN;
    for(int i=0;i<n;++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        res+=(b-1)*a;
        int tot=b*a-c;
        if(chk<tot)chk=tot;
    }
    if(x<=res)
    {
        cout<<0<<endl;
        return;
    }
    if(chk<=0)
    {
        cout<<-1<<endl;
        return;
    }
    int ans=(((x-res)+chk-1)/chk);
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