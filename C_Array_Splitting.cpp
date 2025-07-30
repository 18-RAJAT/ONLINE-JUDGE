#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    priority_queue<int>pq;
    for(int i=0;i<n-1;++i)pq.push(a[i+1]-a[i]);
    int ans=0;
    for(int i=1;i<k;++i)ans-=pq.top(),pq.pop();
    cout<<ans-a[0]+a[n-1]<<endl;
}
signed main()
{
    sol();
    return 0;
}