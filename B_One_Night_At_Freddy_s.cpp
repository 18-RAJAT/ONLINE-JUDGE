#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,l;
    cin>>n>>m>>l;
    map<int,int>mp;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        mp[x]=1;
    }
    multiset<int>ms;
    for(int i=1;i<=l;++i)
    {
        if(ms.size()<=mp.size() && ms.size()<m)ms.insert(1);
        else
        {
            int x=*ms.begin();
            ms.erase(ms.find(x));
            ms.insert(x+1);
        }
        if(mp.count(i)!=0)
        {
            if(ms.size())
            {
                int x=*ms.rbegin();
                ms.erase(ms.find(x));
            }
            mp.erase(i);
        }
    }
    if(ms.size()==0)cout<<0<<endl;
    else cout<<*ms.rbegin()<<endl;
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