#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string r;
    cin>>r;
    int n=r.size();
    for(auto& it:r)
    {
        if(it!='s' && it!='u')return;
    }
    int ans=0,i=0;
    if(r[0]=='u')ans++,r[0]='s';
    if(r[n-1]=='u')ans++,r[n-1]='s';
    while(i<n)
    {
        if(r[i]=='u')
        {
            int j=i;
            while(j<n && r[j]=='u')j++;
            ans+=(j-i)/2;
            i=j;
        }
        else i++;
    }
    cout<<ans<<endl;
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