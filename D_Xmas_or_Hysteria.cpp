#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>ar(n);
    for(int i=0;i<n;++i)ar[i]=i;
    sort(ar.begin(),ar.end(),[&](int x,int y){return a[x]<a[y];});
    if(n==m)
    {
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,int>>vp;
    if(m==1)
    {
        vp.reserve(n-1);
        for(int i=0;i<n-1;++i)vp.push_back({ar[i]+1,ar[i+1]+1});
        cout<<vp.size()<<endl;
        for(int i=0;i<vp.size();++i)cout<<vp[i].first<<" "<<vp[i].second<<endl;
        return;
    }
    if(m==0)
    {
        if(n==2)
        {
            cout<<-1<<endl;
            return;
        }
        int tot=0;
        for(int i=0;i<n;++i)tot+=a[i];
        int tmp=ar[n-1];
        if(tot-a[tmp]<a[tmp])
        {
            cout<<-1<<endl;
            return;
        }
        // else if(n==3)
        // {
        //     cout<<-1<<endl;
        //     return;
        // }
        int lst=ar[n-2],rem=a[tmp]-a[lst],ret=-1,cur=0;
        // if(rem<=0)
        // {
        //     cout<<-1<<endl;
        //     return;
        // }
        // for(int i=0;i<n-2;++i)cout<<a[ar[i]]<<" ";
        // cout<<endl;
        for(int i=0;i<n-2;++i)
        {
            cur+=a[ar[i]];
            if(cur>=rem)
            {
                ret=i;
                break;
            }
        }
        for(int i=0;i<=ret;++i)vp.push_back({ar[i]+1,tmp+1});
        for(int i=ret+1;i<n-2;++i)vp.push_back({ar[i]+1,ar[i+1]+1});
        vp.push_back({lst+1,tmp+1});
        cout<<vp.size()<<endl;
        for(int i=0;i<vp.size();++i)cout<<vp[i].first<<" "<<vp[i].second<<endl;
        return;
    }
    if(n<2*m)
    {
        cout<<-1<<endl;
        return;
    }
    int v=n-m,e=n-2*m,chk=0;
    vp.reserve(n-m);
    for(int i=0;i<m;++i)
    {
        int ok=e/m+(i<e%m);
        for(int j=0;j<ok-1;++j)vp.push_back({ar[chk+j]+1,ar[chk+j+1]+1});
        // cout<<ar[chk+ok-1]+1<<" ";
        int ert=ar[v-m+i];
        // for(int j=0;j<ok-1;++j)vp.push_back({ar[chk+j]+1,ert+1});
        // cout<<ar[chk+ok-1]+1<<" "<<ert+1<<endl;
        if(ok>=1)vp.push_back({ar[chk+ok-1]+1,ert+1});
        int temp=ar[v+i];
        vp.push_back({temp+1,ert+1});
        chk+=ok;
    }
    cout<<vp.size()<<endl;
    for(int i=0;i<vp.size();++i)cout<<vp[i].first<<" "<<vp[i].second<<endl;
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