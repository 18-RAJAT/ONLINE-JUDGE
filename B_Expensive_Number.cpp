#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string n;
    cin>>n;
    int cnt=count(n.begin(),n.end(),'0');
    int sza=n.size();
    for(int i=sza-1;~i;--i)
    {
        cnt-=n[i]=='0';
        if(n[i]!='0')break;
    }
    cout<<sza-cnt-1<<endl;
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