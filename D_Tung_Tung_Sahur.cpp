#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>recur(string s)
{
    int n=s.size();
    vector<int>ans;
    int i=0;
    while(i<n)
    {
        int j=i;
        while(j<n && s[i]==s[j])j++;
        ans.push_back(j-i);
        i=j;
    }
    return ans;
}
void sol()
{
    string s,t;
    cin>>s>>t;
    auto a=recur(s),b=recur(t);
    int ok=1;
    ok&=s[0]==t[0];
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();++i)ok&=2*a[i]>=b[i],ok&=a[i]<=b[i];
    }
    else ok=0;
    cout<<(ok?"YES":"NO")<<endl;
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