#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    while(true)
    {
        if(st.count(st.size()))break;
        st.insert(st.size());
    }
    cout<<st.size()<<endl;
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