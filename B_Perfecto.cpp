#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>precompute()
{
    vector<int>arr(500005,0);
    for(int i=1;i<arr.size();++i)
    {
        int x=i*(i+1)/2;
        if(x==pow((int)sqrt(x),2))arr[i]=1;
    }
    return arr;
}
vector<int>arr;
void sol()
{
    int n;
    cin>>n;
    if(arr[n])
    {
        cout<<-1<<endl;
        return;
    }
    deque<int>dq;
    for(int i=1;i<=n;++i)dq.push_back(i);
    for(int i=1;i<n;++i)
    {
        if(arr[i])
        {
            swap(dq[i-1],dq[i]);
            i++;
        }
    }
    for(auto& it:dq)cout<<it<<" ";
    cout<<endl;
}
signed main()
{
    arr=precompute();
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}