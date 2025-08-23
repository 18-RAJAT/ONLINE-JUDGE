#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    multiset<int>m;
    vector<int>ar(n);
    for(int i=0;i<n;++i)
    {
        m.insert(a[i]);
        while(m.size() && k<*m.rbegin()-*m.begin())
        {
            m.erase(m.lower_bound(a[i-m.size()+1]));
        }
        ar[i]=m.size();
    }
    int mx=0,cnt=0;
    for(int i=0;i<n;++i)mx=max(mx,ar[i]);
    for(int i=0;i<n;++i)
    {
        if(ar[i]==mx)cnt++;
    }
    cout<<mx<<" "<<cnt<<endl;
    for(int i=0;i<n;++i)
    {
        if(ar[i]==mx)cout<<i-mx+2<<" "<<i+1<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}