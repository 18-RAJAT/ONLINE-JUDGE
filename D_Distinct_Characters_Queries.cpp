#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
    set<int>st[26];
    for(int i=0;i<s.size();++i)
    st[s[i]-'a'].insert(i);
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int x;
            char c;
            cin>>x>>c;
            x--;
            char p=s[x];
            s[x]=c;
            st[p-'a'].erase(x),st[c-'a'].insert(x);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            l--;
            int ans=0;
            for(int i=0;i<26;++i)
            {
                auto it=st[i].lower_bound(l);
                if(it==st[i].end() || *it>=r)continue;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}
signed main()
{
    sol();
    return 0;
}