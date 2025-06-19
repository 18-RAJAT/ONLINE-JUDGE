#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ok=0;
    map<char,int>mp;
    for(int i=0;i+1<s.size();++i)
    {
        if(mp[s[i]])
        {
            ok=1;
            break;
        }
        mp[s[i]]++;
    }
    if(mp[s[n-1]] && s[0]!=s[n-1])ok=1;
    cout<<(ok?"Yes":"No")<<endl;
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