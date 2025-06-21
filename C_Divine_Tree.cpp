#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    if(m<n)
    {
        cout<<-1<<endl;
        return;
    }
    int rem=m-n,tmp=0;
    vector<int>cnt(n,0);
    for(int i=n-1;~i;--i)
    {
        int x=n-i-tmp,y=(i==0)?rem:(rem/i),mn=min(x,y);
        cnt[i]=mn,tmp+=mn,rem-=i*mn;
    }
    if(rem!=0)
    {
        cout<<-1<<endl;
        return;
    }
    int ok=0,ct=n-1;
    vector<array<int,2>>ar;
    bool f=0;
    for(int i=n-1;i>0;--i)
    {
        if(!cnt[i])continue;
        if(!f)
        {
            ok=i;
            ar.push_back({ok,0});
            f=1;
        }
        else ar.push_back({ok,i});
        for(int j=0;j<cnt[i]-1;++j)
        {
            while(cnt[ct])ct--;
            ar.push_back({i,ct--});
        }
    }
    if(!f)ok=0;
    for(int i=1;i<=ct;++i)
    {
        if(!cnt[i])ar.push_back({0,i});
    }
    cout<<ok+1<<endl;
    for(auto& it:ar)
    {
        it[0]++;
        it[1]++;
        cout<<it[0]<<" "<<it[1]<<endl;
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