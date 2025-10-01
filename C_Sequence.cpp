#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int ans=0;
    priority_queue<int>pq;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(!pq.empty())
        {
            if(x<pq.top())
            {
                ans+=pq.top()-x;
                pq.pop();
                pq.push(x);
            }
        }
        pq.push(x);
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}