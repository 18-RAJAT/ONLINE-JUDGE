#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    string s,t;
    cin>>n>>k>>s;
    for(int i=0;i<n;++i)
    {
        if(k==0)t+=s[i];
        else
        {
            int left=s[i]-'a',right='z'-s[i];
            if(left>=k){t+=s[i]-k;k=0;}
            else if(right>=k){t+=s[i]+k;k=0;}
            else if(left>right){t+='a';k-=left;}
            else{t+='z';k-=right;}
        }
    }
    cout<<(k==0?t:"-1");
}
signed main()
{
    sol();
    return 0;
}