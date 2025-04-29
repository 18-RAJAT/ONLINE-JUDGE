#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ok=count(s.begin(),s.end(),'B');
    cout<<((s[n-1]=='B' && ok>=2) || (s[0]=='B' && s[n-2]=='B')?"Bob":"Alice")<<endl;
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