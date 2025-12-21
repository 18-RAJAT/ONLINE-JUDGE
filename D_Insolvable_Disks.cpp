// #include"bits/stdc++.h"
// using namespace std;
// #define int long long
// void sol()
// {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;++i)cin>>a[i];
//     int ans=0,l=0,r=1e9+7;
//     for(int i=1;i<n;++i)
//     {
//         int l1=max(0LL,a[i]-(a[i-1]+r)),r1=max(0LL,a[i]-(a[i-1]+l));
//         (r1<=l1)?(l=0,r=a[i]-a[i-1]):(l=l1,r=r1,ans++);
//     }
//     cout<<ans<<endl;
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         sol();
//     }
//     return 0;
// }



#include"bits/stdc++.h"
using namespace std;
#define int long long
const int Inf=6e18;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(n<=1)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>ar(n-1);
    for(int i=1;i<n;++i)ar[i-1]=a[i]-a[i-1];
    vector<array<int,3>>dp,ndp,chk;
    dp.clear();
    dp.push_back({0,Inf,0});
    for(int x=0;x<n-1;++x)
    {
        int dif=ar[x];
        ndp.clear();
        for(int i=0;i<dp.size();++i)
        {
            int f=dp[i][0],s=dp[i][1],c=dp[i][2];
            if(f>=s)continue;
            if(dif-f>=1)ndp.push_back({0,dif-f,c});
            int ret;
            if(s==Inf)ret=0;
            else
            {
                ret=dif-s;
                if(ret<0)ret=0;
            }
            int tp=dif-f;
            if(tp>0 && ret<tp)ndp.push_back({ret,tp,c+1});
        }
        chk.clear();
        for(int i=0;i<ndp.size();++i)
        {
            int f=ndp[i][0],s=ndp[i][1],c=ndp[i][2];
            int ok=0;
            for(int j=0;j<chk.size();++j)
            {
                int f1=chk[j][0],s1=chk[j][1],c1=chk[j][2];
                if(f1<=f && s1>=s && c1>=c)
                {
                    ok=1;
                    break;
                }
            }
            if(ok)continue;
            int j=0;
            while(j<chk.size())
            {
                int f1=chk[j][0],s1=chk[j][1],c1=chk[j][2];
                if(f<=f1 && s>=s1 && c>=c1)
                {
                    chk[j]=chk.back();
                    chk.pop_back();
                }
                else j++;
            }
            chk.push_back({f,s,c});
        }
        dp.swap(chk);
    }
    int ans=0;
    for(int i=0;i<dp.size();++i)
    {
        if(ans<dp[i][2])ans=dp[i][2];
    }
    cout<<ans<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}

// :)))