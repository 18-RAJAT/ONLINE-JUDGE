#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int l,r;
    cin>>l>>r;
    l--;
    int ans=0;
    vector<int>ar{2,3,5,7};
    for(int mask=0;mask<(1<<4);++mask)
    {
        int x=1,t=0;
        for(int j=0;j<4;++j)
        {
            if(mask>>j&1)
            {
                x*=ar[j],t++;
            }
        }
        ans+=(t&1?-1:1)*(r/x-l/x);
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