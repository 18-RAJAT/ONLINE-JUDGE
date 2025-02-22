#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string a,b,c;
    cin>>a>>b>>c;
    vector<int>ar(3,0);
    vector<string>st={a,b,c};
    for(auto& it:st)ar[it[1]=='<'?it[2]-'A':it[0]-'A']++;
    string ans;
    for(int i=0;i<3;++i)ans+=char(find(ar.begin(),ar.end(),i)-ar.begin()+'A');
    cout<<(set<int>(ar.begin(),ar.end()).size()==3?ans:"Impossible");
}
signed main()
{
    sol();
    return 0;
}