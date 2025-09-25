#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int>a(m);
    set<int>st;
    for(int i=0;i<m;++i)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    unordered_map<int,int>mp;
    auto get=[&](int x)
    {
        int y=x;
        while(1)
        {
            auto it=mp.find(y);
            if(it==mp.end())break;
            y=it->second;
        }
        while(1)
        {
            auto it=mp.find(x);
            if(it==mp.end())break;
            mp[x]=y;
            x=it->second;
        }
        return y;
    };
    auto check=[&](int x)
    {
        if(!mp.count(x))mp[x]=get(x+1);
    };
    for(int i=0;i<m;++i)check(a[i]);
    int cur=1;
    for(int i=0;i<n;++i)
    {
        int ok=(s[i]=='A')?cur+1:get(cur+1);
        if(!st.count(ok))
        {
            st.insert(ok);
            check(ok);
        }
        cur=(s[i]=='A')?ok:get(ok);
    }
    cout<<st.size()<<endl;
    for(auto& it:st)cout<<it<<" ";
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