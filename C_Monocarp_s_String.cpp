#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int d=count(s.begin(),s.end(),'a')-count(s.begin(),s.end(),'b');
    if(d==0)
    {
        cout<<0<<endl;
        return;
    }
    int a=0,b=0,ans=1e9;
    map<int,int>mp;
    mp[a-b+d]=-1;
    for(int i=0;i<n;++i)
    {
        (s[i]=='a')?a++:b++;
        if(mp.count(a-b))ans=min(ans,i-mp[a-b]);
        mp[a-b+d]=i;
    }
    if(n<=ans)
    {
        cout<<-1<<endl;
        return;
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