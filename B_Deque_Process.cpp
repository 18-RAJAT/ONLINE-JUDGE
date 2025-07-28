#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=n-1,ok=1;
    string s;
    for(;l<=r;ok=1-ok)
    {
        if(ok)
        {
            a[l]>a[r]?(s+='L',l++):(s+='R',r--);
        }
        else
        {
            a[l]<a[r]?(s+='L',l++):(s+='R',r--);
        }
    }
    cout<<s<<endl;
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