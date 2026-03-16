#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k,p,m;
    cin>>n>>k>>p>>m;
    vector<int>a(n+5);
    int tot=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        tot+=a[i];
    }
    vector<int>ar,br;
    int tmp=0;
    for(int i=1;i<p;++i)
    {
        ar.push_back(a[i]);
        tmp+=a[i];
    }
    sort(ar.begin(),ar.end(),greater<int>());
    int r1=0,r2=0;
    for(int i=0;i<ar.size() && i<k-1;++i)r1+=ar[i];
    int res=p<=k?a[p]:tmp-r1+a[p];
    for(int i=1;i<=n;++i)
    {
        if(i!=p)br.push_back(a[i]);
        tmp+=a[i];
    }
    sort(br.begin(),br.end(),greater<int>());
    for(int i=0;i<br.size() && i<k-1;++i)r2+=br[i];
    //cout<<res<<" "<<r1<<" "<<r2;
    int ans=(tot-a[p])-r2+a[p];
    if(m<res)
    {
        cout<<0<<endl;
        return;
    }
    cout<<(m-res)/ans+1<<endl;
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