#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=676767677;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    auto recur=[&](vector<int>& a,int x)
    {
        int n=a.size();
        if(x<0 || x>n)return false;
        int res=0;
        for(int i=1;i<=n;++i)
        {
            int ok=a[i-1]-(2*res+x-i+1);
            if(ok!=0 && ok!=1)return false;
            res+=ok;
        }
        int tmp=res,xp=n-tmp;
        return xp==x;
    };
    int ans=0,c1=a[0],c2=a[0]-1;
    if(recur(a,c1))ans++;
    if(c2!=c1 && recur(a,c2))ans++;
    cout<<(ans%Mod)<<endl;
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