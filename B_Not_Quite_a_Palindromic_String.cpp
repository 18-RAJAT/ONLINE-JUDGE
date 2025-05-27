#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int m=n/2;
    if(k<0 || k>m)
    {
        cout<<"NO"<<endl;
        return;
    }
    int ct=0;
    for(auto& it:s)if(it=='0')ct++;
    int c1=n-ct,x=ct-(m-k),y=c1-(m-k);
    int ok=(x>=0) && (y>=0) && (x%2==0) && (y%2==0);
    cout<<(ok?"YES":"NO")<<endl;
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