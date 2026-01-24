#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(s[0]=='0' || s[n-1]=='0')
    {
        cout<<-1<<endl;
        return;
    }
    int x=1,y=1;
    for(int i=1;i<=n-1;++i)
    {
        int chk=(s[i-1]=='1'?2:i-1);
        x=x*(chk%1000000007)%1000000007,y=y*(chk%c)%c;
    }
    cout<<(y%c==0?-1:x%1000000007)<<endl;
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