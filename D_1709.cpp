#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n),b(n);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a[i]={x,i+1};
    }
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        b[i]={x,i+1};
    }
    vector<pair<int,int>>vp;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j+1<n;++j)
        {
            if(a[j].first>a[j+1].first)
            {
                swap(a[j],a[j+1]);
                vp.push_back({1,j+1});
            }
            if(b[j].first>b[j+1].first)
            {
                swap(b[j],b[j+1]);
                vp.push_back({2,j+1});
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        if(a[i].first>b[i].first)vp.push_back({3,i+1});
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