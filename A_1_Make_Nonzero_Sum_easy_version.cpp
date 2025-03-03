#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    vector<pair<int,int>>vp;
    if(n%2!=0)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i+=2)
    {
        if(a[i]==a[i+1])vp.push_back({i+1,i+2});
        else
        {
            vp.push_back({i+1,i+1});
            vp.push_back({i+2,i+2});
        }
    }
    cout<<vp.size()<<endl;
    for(auto& it:vp)cout<<it.first<<" "<<it.second<<endl;
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