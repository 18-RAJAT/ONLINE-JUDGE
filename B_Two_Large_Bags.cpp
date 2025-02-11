#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        dq[x-1]++;
    }
    for(int i=0;i<n-1;++i)
    {
        if(dq[i]==1){cout<<"No"<<endl;return;}
        if(dq[i])dq[i+1]+=(dq[i]-2),dq[i]=2,~dq[i];
    }
    cout<<(any_of(dq.begin(),dq.end(),[&](int x){return ~x%2;})?"Yes":"No")<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}