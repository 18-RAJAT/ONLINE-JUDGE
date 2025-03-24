#include<bits/stdc++.h>
using namespace std;
#define int long long
bool ok(int m,int n,vector<int>& a,vector<int>& b)
{
    vector<int>ar=a,br=b;
    for(int j=0;j<m;++j)
    {
        vector<int>chk(n,0);
        for(int i=0;i<n;++i)
        {
            int mn=min(ar[i],br[i]);
            ar[i]-=mn,br[i]-=mn;
            chk[(i-1+n)%n]=ar[i];
        }
        ar=chk;
    }
    return all_of(ar.begin(),ar.end(),[](int x){return x==0;});
}
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    int l=1,r=2e5,ans=r;
    while(l<=r)
    {
        int m=(l+r)/2;
        ((ok(m,n,a,b))?(ans=m,r=m-1):(l=m+1));
    }
    cout<<ans<<endl;
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