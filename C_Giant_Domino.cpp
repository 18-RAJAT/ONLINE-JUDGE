#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=a[0],r=a[n-1];
    if(l==r)
    {
        cout<<2<<endl;
        return;
    }
    if(l>r)
    {
        cout<<2<<endl;
        return;
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int res=l,ans=1;
    while(1)
    {
        if(r<=2*res)
        {
            cout<<ans+1<<endl;
            break;
        }
        auto LB=upper_bound(a.begin(),a.end(),2*res);
        if(LB==a.begin())
        {
            cout<<-1<<endl;
            break;
        }
        int tmp=*(--LB);
        if(tmp==res)
        {
            cout<<-1<<endl;
            break;
        }
        res=tmp,ans++;
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