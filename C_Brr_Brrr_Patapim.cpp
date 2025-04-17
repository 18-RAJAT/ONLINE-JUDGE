#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(2*n+1);
    set<int>st;
    for(int i=1;i<=2*n;++i)st.insert(i);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            int x;
            cin>>x;
            a[i+j]=x;
            if(st.count(x))st.erase(x);
        }
    }
    cout<<*st.begin()<<" ";
    for(int i=2;i<=2*n;++i)cout<<a[i]<<" ";
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