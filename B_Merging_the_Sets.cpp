#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n);
    vector<int>cnt(m+1);
    for(int i=0;i<n;++i)
    {
        int k;
        cin>>k;
        vector<int>tmp;
        for(int j=0;j<k;++j)
        {
            int t;
            cin>>t;
            cnt[t]++;
            tmp.push_back(t);
        }
        a[i]=tmp;
    }
    int c=0,ok=1;
    for(int i=1;i<=m;++i)if(cnt[i]==0)ok=0;
    for(int i=0;i<n;++i)
    {
        int f=0;
        for(int j=0;j<a[i].size();++j)if(cnt[a[i][j]]==1)f=1;
        if(!f)c++;
    }
    if(ok && c>=2)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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