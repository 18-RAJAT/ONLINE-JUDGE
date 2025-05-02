#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),ans(n);
    for(int i=0;i<n;++i)cin>>a[i];
    unordered_set<int>s;
    ans[n-1]=1;
    s.insert(a[n-1]);
    for(int i=n-2;~i;--i)
    {
        if(s.find(a[i])==s.end())
        {
            ans[i]=ans[i+1]+1;
            s.insert(a[i]);
        }
        else ans[i]=ans[i+1];
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<ans[x-1]<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}