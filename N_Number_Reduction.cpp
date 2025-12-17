#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    int k;
    cin>>s>>k;
    int n=s.size();
    k=n-k;
    map<int,set<int>>ms;
    for(int i=0;n-i>=k;++i)ms[s[i]-'0'].insert(i);
    string ans;
    auto it=ms.begin();
    if(it->first==0)it++;
    int tp=*it->second.begin();
    ans.push_back(it->first+'0');
    ms.clear();
    int L=tp+1,R=n-k+1;
    k--;
    for(int i=L;i<=min(n,R);++i)ms[s[i]-'0'].insert(i);
    while(k)
    {
        auto it=ms.begin();
        int tp=*it->second.begin();
        ans.push_back(it->first+'0');
        while(L<=tp)
        {
            ms[s[L]-'0'].erase(L);
            if(it->first==s[L]-'0')it++;
            if(ms[s[L]-'0'].empty())ms.erase(s[L]-'0');
            L++;
        }
        R++;
        if(R<n)ms[s[R]-'0'].insert(R);
        k--;
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