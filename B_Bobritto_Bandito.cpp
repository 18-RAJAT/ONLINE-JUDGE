#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    cout<<max(-(m-(min(m,r))),l)<<" "<<min(m,r)<<endl;
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