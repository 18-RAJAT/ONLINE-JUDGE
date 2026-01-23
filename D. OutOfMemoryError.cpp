#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m,h;
    cin>>n>>m>>h;
    int a[n],b[n];
    for(int i=0;i<n;++i)cin>>a[i],b[i]=a[i];
    set<int>st;
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;x--;
        if(!st.count(x))a[x]=b[x],st.insert(x);
        a[x]+=y;
        if(h<a[x])st.clear();
    }
    for(int i=0;i<n;++i)cout<<(st.count(i)?a[i]:b[i])<<" ";cout<<endl;
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