#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    set<int>st;
    while(n--)
    {
        int x;
        cin>>x;
        st.insert(x);
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