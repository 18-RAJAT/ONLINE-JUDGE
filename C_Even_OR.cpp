#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ok=0;
    const int bit=30;
    vector<int>f(bit,0);
    for(auto& it:a)
    {
        ok|=it;
        for(int i=0;i<bit;++i)if(it&(1<<i))f[i]++;
    }
    if(n%2==0)
    {
        cout<<ok<<endl;
        return;
    }
    int ans=0;
    for(auto& it:a)
    {
        int tmp=0;
        for(int i=0;i<bit;++i)if(f[i]>1 || (!(it&(1<<i)) && f[i]==1))tmp|=(1<<i);
        ans=max(ans,tmp);
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}