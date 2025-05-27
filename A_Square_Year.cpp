#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int ok=stoll(s),res=-1;
    for(int i=0;i<=99;++i)
    {
        if(i*i==ok){res=i;break;}
    }
    if(res==-1)cout<<-1<<endl;
    else cout<<0<<" "<<res<<endl;
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