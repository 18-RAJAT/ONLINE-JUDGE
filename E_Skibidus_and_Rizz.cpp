#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    string s;
    if(k<abs(n-m) || k>(max(n,m)))
    {
        cout<<-1<<endl;
        return;
    }
    int check=n<m;
    for(int i=0;i<min(n,m);++i)
    {
        s.push_back(check+'0');
        s.push_back(1-check+'0');
    }
    for(int i=0;i<k;++i)s.push_back(check+'0');
    int i=0;
    for(auto it=s.begin();it!=s.end();++it,++i)
    {
        if((i&1) || (i+1>2*(k-abs(n-m))))cout<<*it;
    }
    cout<<endl;
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