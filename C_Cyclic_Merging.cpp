#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    multiset<int>st;
    for(int i=0;i<n-1;++i)st.insert(max(a[i],a[i+1]));
    st.insert(max(a[n-1],a[0]));
    st.erase(st.find(*st.rbegin()));
    int ans=0;
    for(auto& it:st)ans+=it;
    cout<<ans<<endl;
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