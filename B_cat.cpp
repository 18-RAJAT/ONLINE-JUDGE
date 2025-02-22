#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(auto& it:a)cin>>it;
    sort(a.begin(),a.end(),[&](string& a,string& b){return a.size()<b.size();});
    for(auto& it:a)cout<<it;
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}