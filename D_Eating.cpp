#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1),bit(n+1,0);
    for(int i=n;i>=1;--i)cin>>a[i];
    for(int i=1;i<=n;++i)bit[i]=bit[i-1]^a[i];
    vector<int>arr[31];
    for(int i=1;i<=n;++i)
    {
        int msb=63-__builtin_clzll(a[i]); 
        if(msb>=0)arr[msb].push_back(i);
    }
    while(q--)
    {
        int x;
        cin>>x;
        int ans=0,chk=1;
        while(chk<=n)
        {
            int cur=0,res=1e18;
            cur=63-__builtin_clzll(x);
            if(arr[cur].size())
            {
                auto LB=lower_bound(arr[cur].begin(),arr[cur].end(),chk);
                if(LB!=arr[cur].end())res=*LB;
            }
            for(int i=cur+1;i<=30;++i)
            {
                auto LB=lower_bound(arr[i].begin(),arr[i].end(),chk);
                if(LB!=arr[i].end())res=min(res,*LB);
            }
            if(res==1e18)
            {
                ans+=(n-chk+1);
                break;
            }
            ans+=(res-chk);
            x^=bit[res-1]^bit[chk-1];
            chk=res;
            if(x>=a[res])x^=a[res],chk++,ans++;
            else break;
            if(x==0)break;
        }
        cout<<ans<<" ";
    }
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