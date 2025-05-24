#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>ar(n+5,0),ans(n+5,0);
    vector<pair<int,int>>vp;
    for(int i=1;i<=m;++i)
    {
        int x,a,b;
        cin>>x>>a>>b;
        if(x==0)vp.push_back({a,b});
        else
        {
            for(int j=a;j<b;++j)ar[j]=-1;
        }
    }
    int ok=0;
    for(int i=0,j;i<vp.size();++i)
    {
        for(j=vp[i].first;j<vp[i].second;++j)
        {
            if(~ar[j])
            {
                ar[j]=-2;
                break;
            }
        }
        if(j>=vp[i].second)ok=1;
    }
    if(ok)
    {
        cout<<"NO"<<endl;
        return;
    }
    ans[0]=100000;
    for(int i=1;i<=n;++i)
    {
        if(ar[i]==-1)
        {
            if(ans[i]==0)ans[i]=ans[i+1]=ans[0];
            else ans[i+1]=ans[i];
        }
        else if(ar[i]==0 && ans[i]==0)ans[i]=ans[0],ok=1;
        else
        {
            if(ans[i]==0)ans[i]=ans[0];
            ans[i+1]=ans[i]-1;
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;++i)cout<<ans[i]<<" ";
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}