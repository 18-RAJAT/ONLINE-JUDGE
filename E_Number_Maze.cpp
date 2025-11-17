#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    vector<string>comb={"12","123","1234"};
    map<int,vector<string>>mp;
    for(auto& it:comb)
    {
        string s=it;
        sort(s.begin(),s.end());
        vector<string>ar;
        do
        {
            ar.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        mp[stoi(it)]=ar;
    }
    int n,j,k;
    cin>>n>>j>>k;
    auto& it=mp[n];
    string x=it[j-1],y=it[k-1];
    int sz=x.size(),c1=0;
    for(int i=0;i<sz;++i)
    {
        if(x[i]==y[i])c1++;
    }
    int c2=sz-c1;
    cout<<c1<<"A"<<c2<<"B"<<endl;
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