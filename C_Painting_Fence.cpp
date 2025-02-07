#include<bits/stdc++.h>
using namespace std;
#define int long long
int recur(int l,int r,int id,array<int,5005>& a)
{
    if(r<l)return 0;
    int ans=LLONG_MAX,mn=-1;
    for(int i=l;i<=r;++i)
    {
        if(a[i]<ans)
        {
            ans=a[i],mn=i;
        }
    }
    int state1=recur(l,mn-1,ans,a),state2=recur(mn+1,r,ans,a);
    ans=min(r-l+1,state1+state2+ans-id);
    return ans;
}
void sol()
{
    int n;
    cin>>n;
    array<int,5005>a={0};
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<recur(0,n-1,0,a);
}
signed main()
{
    sol();
    return 0;
}