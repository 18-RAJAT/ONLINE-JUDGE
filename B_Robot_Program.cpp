#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;++i)
    {
        assert(s[i-1]=='L' || s[i-1]=='R');
        (s[i-1]=='L')?a[i]=a[i-1]-1:a[i]=a[i-1]+1;
    }
    int ans=0,res=k,ok=-1;
    for(int i=1;i<=n;++i)
    {
        if(a[i]+x==0)// || a[i]-x==0)
        {
            ok=i;
            assert(ok<=res);
            break;
        }
    }
    if(ok==-1 || res<ok)
    {
        cout<<ans<<endl;
        return;
    }
    ans++,res-=ok;
    int tmp=-1;
    for(int i=1;i<=n;++i)
    {
        if(a[i]==0)
        {
            tmp=i;
            // assert(tmp<=res);
            break;
        }
    }
    if(tmp==-1)
    {
        cout<<ans<<endl;
        return;
    }
    ans+=res/tmp,res%=tmp;
    for(int i=1;i<=res;++i)
    {
        if(a[i]==0)
        {
            ans++;
            break;
        }
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