#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>o,e;
    for(int i=0;i<2*n;++i)
    {
        int x;
        cin>>x;
        if(x%2==0)e.push_back({x,i});
        else o.push_back({x,i});
    }
    if(o.size()==0)
    {
        for(int i=0;i<e.size()-2;i+=2)
        cout<<e[i].second+1<<" "<<e[i+1].second+1<<endl;
        return;
    }
    if(o.size()%2==0)
    {
        for(int i=0;i<o.size()-2;i+=2)
        cout<<o[i].second+1<<" "<<o[i+1].second+1<<endl;
        for(int i=0;i<e.size();i+=2)
        cout<<e[i].second+1<<" "<<e[i+1].second+1<<endl;
    }
    else
    {
        for(int i=0;i<o.size()-1;i+=2)
        cout<<o[i].second+1<<" "<<o[i+1].second+1<<endl;
        for(int i=0;i<e.size()-1;i+=2)
        cout<<e[i].second+1<<" "<<e[i+1].second+1<<endl;
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