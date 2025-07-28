#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    int k;
    cin>>s>>k;
    while(true)
    {
        set<char>st;
        int i=0;
        for(;i<s.size() && st.size()<=k;++i)st.insert(s[i]);
        if(st.size()<=k)
        {
            cout<<s<<endl;
            return;
        }
        int x=stoll(s.substr(0,i))+1;
        s=to_string(x)+string(s.size()-i,'0');
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