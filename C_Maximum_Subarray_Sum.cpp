#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=-1e17,M=1e18;
void sol()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int mx=LLONG_MIN,rem=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='1')
        {
            rem+=a[i];
            mx=max(mx,rem);
            if(rem<0)rem=0;
        }
        else rem=0;
    }
    if(k<mx)
    {
        cout<<"No"<<endl;
        return;
    }
    int cnt=0;
    for(int i=0;i<n;++i)if(s[i]=='0')cnt++;
    if(cnt==0)
    {
        if(mx==k)
        {
            cout<<"Yes"<<endl;
            for(auto& it:a)cout<<it<<" ";
            cout<<endl;
        }
        else cout<<"No"<<endl;
        return;
    }
    vector<int>dp(n,0),ndp(n,0);
    int res=0;
    for(int i=0;i<n;++i)
    {
        dp[i]=res;
        if(s[i]=='1')
        {
            res+=a[i];
            if(res<0)res=0;
        }
        else res=0;
    }
    res=0;
    for(int i=n-1;~i;--i)
    {
        ndp[i]=res;
        if(s[i]=='1')
        {
            res+=a[i];
            if(res<0)res=0;
        }
        else res=0;
    }
    int ok=0;
    vector<int>ans;
    for(int p=0;p<n;++p)
    {
        if(s[p]=='0')
        {
            // cout<<"check "<<dp[p]<<" "<<ndp[p]<<endl;
            int diff=k-dp[p]-ndp[p];
            vector<int>b=a;
            for(int j=0;j<n;++j)if(s[j]=='0')b[j]=(p==j?diff:-M);
            // for(int i=0;i<n;++i)b[i]+=b[(i-1+n)%n];
            int tp=LLONG_MIN,tot=0;
            for(int i=0;i<n;++i)
            {
                tot+=b[i],tp=max(tp,tot);
                // cout<<b[i]<<" "<<"Chkk->> "<<tot<<" "<<tp<<endl;
                if(tot<0)tot=0;
            }
            if(tp==k)
            {
                ok=1,ans=b;
                break;
            }
        }
    }
    if(ok)
    {
        cout<<"Yes"<<endl;
        // for(int mask=1;mask<(1LL<<ans.size());mask<<=1)
        for(int i=0;i<ans.size();++i)
        {
            // cout<<ans[0]<<" ";
            // int i=__builtin_ctzll(mask);
            int tmp=ans[i];
            if(tmp<N)tmp=N;
            // if(mask&1)tmp=-tmp;
            // if(i+1<ans.size())tmp+=ans[i+1];
            if(M<tmp)tmp=M;
            cout<<tmp<<" ";
        }
        cout<<endl;
    }
    else cout<<"No"<<endl;
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