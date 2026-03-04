#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size();
    int sum=s[0]-'0';
    vector<int>a;
    for(int i=1;i<n;++i)
    {
        sum+=s[i]-'0';
        a.push_back(s[i]-'0');
    }
    a.push_back(s[0]-'1');
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans=0;
    for(auto& it:a)
    {
        if(sum>=10)
        {
            sum-=it;
            ans++;
        }
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