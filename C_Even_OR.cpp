#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int res=0;
    for(auto& it:a)res|=it;
    if(n%2==0)
    {
        cout<<res<<endl;
        return;
    }
    vector<int>ar(30,0),bit(30);
    for(int i=0;i<30;++i)bit[i]=1LL<<i;
    for(auto& it:a)
    {
        for(int i=0;i<30;++i)
        {
            if(it&bit[i])ar[i]++;
        }
    }
    int ans=0;
    for(auto& it:a)
    {
        int cur=res;
        for(int i=0;i<30;++i)
        {
            if((it&bit[i]) && ar[i]==1)cur&=~bit[i];
        }
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}