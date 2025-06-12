#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(!is_sorted(a.begin(),a.end()) && !(reverse(a.begin(),a.end()),is_sorted(a.begin(),a.end())))
    {
        cout<<"NO"<<endl;
        return;
    }
    int tmp=a[1]-a[0];
    for(int i=0;i<n;++i)a[i]-=(i+1)*tmp;
    if(a[0]<0 || a[0]%(n+1) || count(a.begin(),a.end(),a[0])!=n)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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