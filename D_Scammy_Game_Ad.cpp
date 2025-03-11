#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<pair<pair<char,int>,pair<char,int>>>v(n);
    for(int i=0;i<n;++i)
    {
        char c1,c2;
        int x1,x2;
        cin>>c1>>x1>>c2>>x2;
        v[i]={{c1,x1},{c2,x2}};
    }
    int a=1,b=1,c=0;
    for(int i=n-1;~i;--i)
    {
        auto F=v[i].first.first,S=v[i].second.first;
        int f=v[i].first.second,s=v[i].second.second;
        int p1=F=='+'?0:f-1,q1=F=='+'?f:0;
        int p2=S=='+'?0:s-1,q2=S=='+'?s:0;
        int t1,t2,t3;
        /*
            calc->
            mul lft coefficient
            upd ryt coefficient & cons term
        */
        (b<=a)?(t1=a*(1+p1),t2=b+a*p2,t3=a*(q1+q2)+c):(t1=a+b*p1,t2=b*(1+p2),t3=b*(q1+q2)+c);
        a=t1,b=t2,c=t3;
    }
    cout<<a+b+c<<endl;
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