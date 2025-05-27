#include<bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
void Build(vector<int>& ar,int x)
{
    for(int i=2;i<=x;++i)
    {
        if(ar[i]==0)
        {
            for(int j=i;j<=x;j+=i)
            {
                if(ar[j]==0)ar[j]=i;
            }
        }
    }
}
int recur(int n,int k,vector<int>& ar)
{
    if(n==1)return 0;
    vector<pair<int,int>>vp;
    int x=n;
    while(x>=2)
    {
        int tp=ar[x],ct=0;
        while(x%tp==0)
        {
            x/=tp,ct++;
        }
        vp.emplace_back(tp,ct);
    }
    vector<int>arr;
    function<void(int,int)>check=[&](int i,int j)
    {
        if(i==vp.size())
        {
            arr.push_back(j);
            return;
        }
        int x=vp[i].first,y=vp[i].second,z=j;
        for(int k=0;k<=y;++k)
        {
            check(i+1,z);
            z*=x;
        }
    };
    check(0,1);
    sort(arr.begin(),arr.end());
    int sz=arr.size();
    vector<int>dp(sz,1e9);
    dp[0]=0;
    int UB=upper_bound(arr.begin(),arr.end(),k)-arr.begin()-1;
    if(UB<1)UB=0;
    for(int i=1;i<sz;++i)
    {
        int tmp=arr[i],ans=1e9;
        for(int j=1;j<=UB;++j)
        {
            int q=arr[j];
            if(tmp<q)break;
            if(tmp%q!=0)continue;
            int rem=tmp/q;
            int LB=lower_bound(arr.begin(),arr.end(),rem)-arr.begin();
            ans=min(ans,dp[LB]+1);
        }
        dp[i]=ans;
    }
    int LB=lower_bound(arr.begin(),arr.end(),n)-arr.begin();
    return dp[LB];
}
void sol()
{
    int x,y,k;
    cin>>x>>y>>k;
    int res=1e6;
    vector<int>ar(res+1);
    Build(ar,res);
    int g=gcd(x,y),a=x/g,b=y/g;
    int f1=recur(a,k,ar);
    if(f1>=1e9)
    {
        cout<<-1<<endl;
        return;
    }
    int f2=recur(b,k,ar);
    if(f2>=1e9)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<(f1+f2)<<endl;
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