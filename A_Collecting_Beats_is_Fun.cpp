#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int k;
    cin>>k;
    map<int,int>mp;
    for(int i=0;i<4;++i)
    {
        string s;
        cin>>s;
        for(auto& it:s)mp[it]++;
    }
    for(auto& it:mp)
    {
        if(it.first!='.' && it.second>2*k)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
signed main()
{
    sol();
    return 0;
}