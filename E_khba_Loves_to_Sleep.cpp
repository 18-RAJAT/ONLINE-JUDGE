#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    a.insert(a.end(),{-1,x+1});
    sort(a.begin(),a.end());
    vector<int>ans;
    auto check=[&](int m,int ok)->int
    {
        if(m==0)
        {
            if(ok)for(int i=0;i<k;++i)ans.emplace_back(i);
            return 1;
        }
        int res=k;
        for(int i=0;i<=n;++i)
        {
            int l=a[i]+(i?m:1),r=a[i+1]-(i!=n?m:1);
            while(r-l+1>0)
            {
                res--;
                if(ok)ans.emplace_back(l);
                l++;
                if(res==0)return 1;
            }
        }
        return 0;
    };
    int l=0,r=1e9,idx=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(check(m,0))idx=m,l=m+1;
        else r=m-1;
    }
    check(idx,1);
    for(auto& it:ans)cout<<it<<" ";
    cout<<endl;
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