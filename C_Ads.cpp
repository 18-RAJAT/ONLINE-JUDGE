#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(n<=3)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>ar;
    for(auto& it:a)
    {
        if(it<k)ar.push_back(it);
    }
    sort(ar.begin(),ar.end());
    int cnt=0;
    for(int i=0;i+1<ar.size();i+=2)
    {
        if(ar[i]+ar[i+1]<k)cnt++;
        else break;
    }
    int mn=min(cnt,n/3);
    cout<<(((mn>0)?((mn+((n-3*mn)>0?1:0))-1):n-1))<<endl;
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