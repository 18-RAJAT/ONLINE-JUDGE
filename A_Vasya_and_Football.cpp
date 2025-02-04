#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string h,a;
    cin>>h>>a;
    int n;
    cin>>n;
    vector<tuple<string,int,int>>vp;
    unordered_map<int,pair<int,bool>>hp,ap;
    for(int i=0;i<n;++i)
    {
        int t,m;
        char c,card;
        cin>>t>>c>>m>>card;
        auto& mp=(c=='h')?hp:ap;
        auto& st=mp[m];
        if(st.second)continue;
        if(card=='y')
        {
            if(++st.first>1)
            {
                vp.emplace_back((c=='h')?h:a,m,t);
                st.second=1;
            }
        }
        else
        {
            vp.emplace_back((c=='h')?h:a,m,t);
            st.second=1;
        }
    }
    for(auto& it:vp)
    {
        string x;
        int y,z;
        tie(x,y,z)=it;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}