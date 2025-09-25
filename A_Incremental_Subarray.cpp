#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;++i)cin>>a[i];
    int chk=0,l=a[0],r=-1;
    for(int i=0;i<m-1;++i)
    {
        if(a[i+1]==a[i]+1)
        {
            int ok=a[i+1]-chk;
            if(l<ok)l=ok;
        }
        else if(a[i+1]==1)
        {
            int tmp=a[i]-chk;
            if(r==-1)r=tmp;
            else if(r!=tmp)
            {
                cout<<0<<endl;
                return;
            }
            chk++;
        }
        else
        {
            cout<<0<<endl;
            return;
        }
    }
    if(r==-1)
    {
        int x=l;
        if(x<1)x=1;
        int y=n-chk,ans=0;
        if(y>=x)ans=y-x+1;
        cout<<ans<<endl;
    }
    else
    {
        int tmp=r;
        cout<<((tmp<l || tmp<1 || tmp>n || tmp+chk>n)?0:1)<<endl;
    }
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