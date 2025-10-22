#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    if(n<=0||n>200000)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>a(n),b(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    unordered_map<int,int>cnt;
    int ok=0;
    for(int i=0;i<n;++i)
    {
        int x=a[i];
        for(int j=2;j*j<=x;++j)
        {
            if(x%j==0)
            {
                if(cnt[j]==1)ok=1;
                cnt[j]++;
                while(x%j==0)x/=j;
            }
        }
        if(x>1)
        {
            if(cnt[x]==1)ok=1;
            cnt[x]++;
        }
    }
    if(ok)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;++i)
    {
        int x=a[i]+1;
        for(int j=2;j*j<=x;++j)
        {
            if(x%j==0)
            {
                if(cnt[j]>=1)ok=1;
                while(x%j==0)x/=j;
            }
        }
        if(x>1)
        {
            if(cnt[x]>=1)ok=1;
        }
    }
    cout<<(ok?"1":"2")<<endl;
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