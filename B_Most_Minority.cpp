#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0;i<n;++i)cin>>s[i];
    vector<int>ar(n);
    for(int j=0;j<m;++j)
    {
        int z=0,o=0;
        for(int i=0;i<n;++i)
        {
            (s[i][j]=='0'?z++:o++);
        }
        if(z==0 || o==0)
        {
            for(int i=0;i<n;++i)ar[i]++;
        }
        else if(z<o)
        {
            for(int i=0;i<n;++i)if(s[i][j]=='0')ar[i]++;
        }
        else
        {
            for(int i=0;i<n;++i)if(s[i][j]=='1')ar[i]++;
        }
    }
    int mx=*max_element(ar.begin(),ar.end());
    for(int i=0;i<n;++i)
    {
        if(ar[i]==mx)cout<<i+1<<" ";
    }
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}