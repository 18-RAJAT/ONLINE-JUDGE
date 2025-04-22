#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n;
    auto f=[&](char a,char b){return a!=b;};
    ans+=(s[0]=='1');
    for(int i=0;i<n-1;++i)ans+=f(s[i],s[i+1]);
    int res=0;
    if(n>=2)
    {
        for(int i=0;i<=n-2;++i)
        {
            int x=(s[i]=='1')-(s[0]=='1'),y=f(s[0],s[i+1])-f(s[i],s[i+1]);
            res=min(res,x+y);
        }
        for(int i=1;i<n;++i)
        {
            int x=f(s[i-1],s[n-1])-f(s[i-1],s[i]);
            res=min(res,x);
        }
    }
    if(n>=1)
    {
        int x=(s[n-1]=='1')-(s[0]=='1');
        res=min(res,x);
    }
    array<vector<int>,4>ar;
    for(int i=0;i<n-1;++i)
    {
        int a=s[i]-'0',b=s[i+1]-'0',p=a*2+b;
        // cout<<"Chk->>"<<p<<endl;
        ar[p].push_back(i);
    }
    for(int i=1;i<n;++i)
    {
        if(s[i-1]!=s[i])
        {
            int a=s[i-1]-'0',b=s[i]-'0',p=a*2+b;
            // cout<<p<<endl;
            auto it=lower_bound(ar[p].begin(),ar[p].end(),i);
            if(it!=end(ar[p]))
            {
                int id=*it;
                if(id<=n-2)res=min(res,-2LL);
            }
        }
    }
    cout<<ans+res<<endl;
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