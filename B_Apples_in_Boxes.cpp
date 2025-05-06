#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int mn=*min_element(a.begin(),a.end()),mx=*max_element(a.begin(),a.end()),cnt=0;
    for(int i=0;i<n;++i)if(a[i]==mx)cnt++;
    int diff=mx-mn;
    if(diff<=k)cout<<(sum&1?"Tom":"Jerry")<<endl;
    else
    {
        if(k+1<diff || cnt!=1)cout<<"Jerry"<<endl;
        else cout<<((sum-1)%2==0?"Tom":"Jerry")<<endl;
    }
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