#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;++i)
    {
        string a,b;
        cin>>a>>b;
        b.push_back(';');
        mp[b]=a;
    }
    for(int i=0;i<m;++i)
    {
        string a,b;
        cin>>a>>b;
        cout<<a<<" "<<b<<" #";
        for(int j=0;j<mp[b].size();++j)cout<<mp[b][j];
        cout<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}