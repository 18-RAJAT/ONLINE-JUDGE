#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(n==1)
    {
        int ok=0;
        for(int i=0;i<k;++i)
        {
            int x,y;
            cin>>x>>y;
            if(y==2)ok^=1;
        }
        cout<<(ok?"Mimo":"Yuyu")<<endl;
    }
    else
    {
        unordered_set<int>st;
        st.rehash(min(k,200000LL));
        for(int i=0;i<k;++i)
        {
            int x,y;
            cin>>x>>y;
            if(y>1)
            {
                auto it=st.find(y);
                if(it==st.end())st.insert(y);
                else st.erase(it);
            }
        }
        cout<<(st.empty()?"Yuyu":"Mimo")<<endl;
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