#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    set<int>st,cur;
    for(int i=0;i<n;++i)
    {
        st.insert(a[i]);
        cur.insert(a[i]);
        if(st.size()==cur.size())
        {
            ans++;
            cur.clear();
        }
    }
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