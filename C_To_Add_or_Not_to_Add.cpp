#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>res(n);
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=a[i];
        res[i]=sum;
    }
    int ans=1,tmp=a[0];
    for(int i=0;i<n;++i)
    {
        int l=0,r=i,val=-1;
        while(l<=r)
        {
            int mid=(l+r)/2,ret=i-mid,cur=0;
            if(i>=1)cur=res[i-1];
            if(mid>=1)cur-=res[mid-1];
            int req=ret*a[i];
            ((req-cur<=k)?val=mid,r=mid-1:l=mid+1);
        }
        int cnt=1;
        if(~val)cnt+=i-val;
        if(ans<cnt)ans=cnt,tmp=a[i];
    }
    cout<<ans<<" "<<tmp<<endl;
}
signed main()
{
    sol();
    return 0;
}