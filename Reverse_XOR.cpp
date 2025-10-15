#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int bt=__builtin_ctz(n);
    for(int i=0;i<=bt;++i)
    {
        bitset<32>bs(n>>i);
        int ok=1,chk=32-__builtin_clz(n>>i);
        int l=0,r=chk-1;
        while(l<=r)
        {
            if(bs[l]!=bs[r])
            {
                ok=0;
                break;
            }
            l++,r--;
        }
        if(!(ok && (chk&1?bs[chk>>1]==0:1)))continue;
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