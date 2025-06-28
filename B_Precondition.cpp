#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s,t;
    cin>>s>>t;
    set<char>st;
    for(char it:t)st.insert(it);
    for(int i=1;i<s.size();++i)
    {
        if(s[i]>='A' && s[i]<='Z' && !st.count(s[i-1]))
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
signed main()
{
    sol();
    return 0;
}