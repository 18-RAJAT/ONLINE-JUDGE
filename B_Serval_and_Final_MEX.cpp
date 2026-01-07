#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(!x)a.push_back(i+1);
    }
    if(a.empty())
    {
        cout<<"1 "<<endl<<"1 "<<n<<endl;
        return;
    }
    vector<pair<int,int>>vp;
    if(a[0]!=1)
    {
        vp.push_back({2,n});
        vp.push_back({1,2});
    }
    else if(a.back()!=n)
    {
        vp.push_back({1,n-1});
        vp.push_back({1,2});
    }
    else
    {
        vp.push_back({n/2+1,n});
        vp.push_back({1,n/2});
        vp.push_back({1,2});
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