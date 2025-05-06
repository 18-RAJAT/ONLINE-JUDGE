#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e7+5;
vector<int>ans(N,0);
void sol()
{
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
}
signed main()
{
    int t;
    cin>>t;
    for(int i=2;i<N;++i)
    {
        if(ans[i]==0)
        {
            for(int j=i;j<N;j+=i)ans[j]++;
        }
        ans[i]+=ans[i-1];
    }
    while(t--)
    {
        sol();
    }
    return 0;
}