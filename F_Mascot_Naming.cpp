#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    string s;
    cin>>s;
    string ans("");
    map<int,int>mp;
    for(int i=0;i<n;++i)mp[i]=0;
    for(auto&it:s)
    {
        auto beg=mp.begin();
        while(beg!=mp.end())
        {
            while(beg->second<a[beg->first].length() && a[beg->first][beg->second]!=it)
            {
                ans+=a[beg->first][beg->second];
                beg->second++;
            }
            if(beg->second>=a[beg->first].length())
            {
                auto tmp=beg;
                beg++;
                mp.erase(tmp);
            }
            else beg++;
        }
        if(mp.empty())
        {
            cout<<"YES"<<endl<<ans<<endl;
            return;
        }
        ans+=it;
        for(auto& it:mp)it.second++;
    }
    cout<<"NO"<<endl;
}
signed main()
{
    sol();
    return 0;
}