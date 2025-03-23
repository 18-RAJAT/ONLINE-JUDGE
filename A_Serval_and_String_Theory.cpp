#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    string s1=s,s2=s;
    reverse(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<<((s2.front()!=s2.back() && ((s<s1)|k))?"YES":"NO")<<endl;
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