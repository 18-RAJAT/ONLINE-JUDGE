#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
const ull N=1e18+5;
void sol()
{
    int q;
    cin>>q;
    vector<int>l(q+5,-1),r(q+5,-1);
    vector<ull>ar(q+5,1);
    for(int i=1;i<=q;++i)
    {
        int li,ri;
        ull xi;
        cin>>li>>ri>>xi;
        l[i+1]=li,r[i+1]=ri;
        ull a=ar[li],b=ar[ri],s=a+b;
        if(s<a || s<b || s>N)s=N;
        ar[i+1]=s;
        int cur=i+1;
        ull pos=xi;
        while(cur^1 && cur)
        {
            int L=l[cur],R=r[cur];
            ull tmp=ar[L];
            cur=(pos<=tmp?L:(pos-=tmp,R));
        }
        cout<<(cur==0?'0':'1')<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}