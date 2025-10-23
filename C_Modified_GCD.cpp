#include"bits/stdc++.h"
using namespace std;
#define int long long
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void sol()
{
    int a,b;
    cin>>a>>b;
    int g=gcd(a,b);
    set<int>st;
    for(int i=1;i*i<=g;++i)
    {
        if(g%i==0)
        {
            st.insert(i);
            st.insert(g/i);
        }
    }
    st.insert(1e18);
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        auto it=st.upper_bound(r);
        it--;
        if(*it>=l)cout<<*it<<endl;
        else cout<<-1<<endl;
    }
}
signed main()
{
   sol();
   return 0;
}