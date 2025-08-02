#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int sum=accumulate(a.begin(),a.end(),0LL);
    if(sum==s)
    {
        cout<<-1<<endl;
        return;
    }
    if(s<sum)
    {
        for(int i=0;i<n;++i)cout<<a[i]<<(i==n-1?"\n":" ");
        return;
    }
    if(s==sum+1)
    {
        array<int,3>cnt={};
        for(int i=0;i<n;++i)++cnt[a[i]];
        while(cnt[0]--)cout<<0<<" ";
        while(cnt[2]--)cout<<2<<" ";
        while(cnt[1]--)cout<<1<<" ";
        cout<<endl;
        return;
    }
    cout<<-1<<endl;
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