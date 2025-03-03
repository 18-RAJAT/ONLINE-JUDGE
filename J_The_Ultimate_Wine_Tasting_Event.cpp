#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int w=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='W')w++;
    }
    cout<<(w%2==0?"YES":"NO")<<endl;
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