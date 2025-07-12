#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    for(int i=0;i<60;++i)
    {
        for(auto& it:a)
        {
            if(((it>>i)&1)==0)
            {
                int bit=1ll<<i;
                if(bit<=k)
                {
                    k-=bit;
                    ans++;
                }
            }
            else ans++;
        }
    }
    cout<<ans<<endl;
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