#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;++i)mp[a[i]]++;
    int ans=0,l=-1,r=-1,x=-1,cnt=0;
    for(int i=0;i<n;++i)
    {
        if(mp[a[i]]==1)
        {
            if(x==-1)x=i;cnt++;
            if(ans<cnt)ans=cnt,l=x,r=i;
        }
        else x=-1,cnt=0;
    }
    (ans>=1?cout<<l+1<<" "<<r+1<<endl:cout<<0<<endl);
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