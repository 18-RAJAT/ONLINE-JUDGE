#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int a,b,ab,ba;
    cin>>a>>b>>ab>>ba;
    int n=s.size(),ca=0,cb=0;
    for(auto& it:s)(it=='A'?ca++:cb++);
    int A=0,B=0;
    for(int i=0;i+1<n;++i)
    {
        if(s[i]=='A' && s[i+1]=='B')A++;
        if(s[i]=='B' && s[i+1]=='A')B++;
    }
    int x=min(ab,A),y=min(ba,B),l=max({0LL,ca-a,cb-b}),r=min(ca,cb);
    cout<<(l<=r && l<=x+y?"YES":"NO")<<endl;
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