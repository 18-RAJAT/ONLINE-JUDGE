#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int l=0,r=n+1;
    while(r-l>1)
    {
        int m=(l+r)/2,cnt=0;
        vector<int>ar(m,0);
        int ans=0;
        for(int i=0;i<n;++i)
        {
            if(a[i]<m) ar[a[i]]=1;
            while(cnt<m && ar[cnt])cnt++;
            if(cnt==m)
            {
                for(int j=0;j<m;++j)ar[j]=0;
                ans++,cnt=0;
            }
        }
        (k<=ans)?l=m:r=m;
    }
    cout<<l<<endl;
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