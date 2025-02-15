#include<bits/stdc++.h>
using namespace std;
#define int long long
int ask(int i,int j)
{
    cout<<"? "<<i<<' '<<j<<endl;
    int x;
    cin>>x;
    return x;
}
void query(string ans)
{
    cout<<"! "<<ans<<endl;
}
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    vector<bool>ok(n+1,0);
    int f=-1,s=-1;
    for(int i=0;i<n;++i)ok[a[i]]=1;
    for(int i=1;i<=n;++i)
    {
        if(!ok[i])
        {
            int x=(i==1?2:i-1);
            (ask(i,x)==0)?query("A"):query("B");
            return;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(a[i]==1)f=i+1;
        else if(a[i]==n)s=i+1;
    }
    int x=ask(f,s);
    if(x==0 || x<n-1)query("A");
    else if(x>=n)query("B");
    else
    {
        x=ask(s,f);
        (x==n-1)?query("B"):query("A");
    }
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