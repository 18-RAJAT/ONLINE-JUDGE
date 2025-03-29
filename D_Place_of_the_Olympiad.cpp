#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    int l=0,r=m;
    while(r-l>=2)
    {
        int mid=(l+r)/2,chk=mid*(m/(mid+1))+(m%(mid+1));
        (k<=n*chk)?r=mid:l=mid;
    }
    cout<<r<<endl;
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