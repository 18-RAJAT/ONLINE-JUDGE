#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<n;++i)
    {
        if(st.empty() || st.top()!=s[i])st.push(s[i]);
        else st.pop();
    }
    cout<<(st.empty()?"YES":"NO")<<endl;
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