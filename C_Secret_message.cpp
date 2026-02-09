#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n,0);
    for(int i=0;i<k;++i)
    {
        string s;
        cin>>s;
        for(int j=0;j<n;++j)a[j]|=1LL<<(s[j]-'a');
    }
    vector<int>ar;
    for(int i=1;i*i<=n;++i)
    {
        if(n%i==0)
        {
            ar.push_back(i);
            if(i*i!=n)ar.push_back(n/i);
        }
    }
    sort(ar.begin(),ar.end());
    for(auto& it:ar)
    {
        vector<int>msk(it,~(-1LL<<26));
        for(int i=0;i<n;++i)msk[i%it]&=a[i];
        int ok=1;
        for(int i=0;i<it;++i)
        {
            if(msk[i]==0){ok=0;break;}
        }
        if(ok)
        {
            string s(it,'a');
            for(int i=0;i<it;++i)s[i]=char('a' + __builtin_ctzll(msk[i]));
            for(int i=0;i<n;++i)cout<<s[i%it];
            cout<<endl;
            return;
        }
    }
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