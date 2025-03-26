#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;++i) 
    {
        int x;
        cin>>x;
        mp[x]++;
        if(mp[0]>=3 && mp[2]>=2 && mp[3]>=1 && mp[5]>=1 && mp[1]>=1 && ans==0)ans=i+1;
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