#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(int i=0;i<n-1;++i)
    {
        if(s[i]=='*' && s[i+1]=='*')
        {
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='>' && s[i+1]!='>')
        {
            cout<<-1<<endl;
            return;
        }
        if(s[i]!='<' && s[i+1]=='<')
        {
            cout<<-1<<endl;
            return;
        }
    }
    int l=0,r=0;
    while(l<n && s[l]=='<')l++;
    while(r<n && s[n-r-1]=='>')r++;
    cout<<max(l,r)+(n-l-r)<<endl;
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