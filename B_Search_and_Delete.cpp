#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    multiset<int>ms;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    for(int i=0;i<m;++i)
    {
        int x;
        cin>>x;
        auto it=ms.find(x);
        if(it!=ms.end())ms.erase(it);
    }
    for(auto& it:ms)cout<<it<<" ";
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}