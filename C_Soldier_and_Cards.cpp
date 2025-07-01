#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    deque<int>a,b;
    int k1,k2,x;
    cin>>k1;
    for(int i=0;i<k1;++i)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>k2;
    for(int i=0;i<k2;++i)
    {
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<1e6;++i)
    {
        int u=a.front(),v=b.front();
        a.pop_front();
        b.pop_front();
        if(u>v)
        {
            a.push_back(v);
            a.push_back(u);
        }
        else
        {
            b.push_back(u);
            b.push_back(v);
        }
        if(a.empty())
        {
            cout<<i+1<<" "<<2<<endl;
            return;
        }
        if(b.empty())
        {
            cout<<i+1<<" "<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
signed main()
{
    sol();
}