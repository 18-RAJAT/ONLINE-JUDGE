#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size(),ok=0;
    for(int i=0;i<n-1;++i)
    {
        if(s[i]==s[i+1])
        {
            ok=1;
            break;
        }
    }
    cout<<(ok?1:n)<<endl;
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