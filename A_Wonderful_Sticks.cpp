#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(n);
    int l=1,r=n;
    for(int i=n-2;~i;--i)
    {
        (s[i]=='<')?a[i+1]=l++:a[i+1]=r--;
    }
    a[0]=l;
    for(int i=0;i<n;++i)cout<<a[i]<<" ";
    cout<<endl;
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