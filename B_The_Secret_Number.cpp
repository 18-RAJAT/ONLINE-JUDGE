#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x;
    cin>>x;
    vector<int>ans;
    for(int i=10;i<x;i*=10)
    {
        if(x%(i+1)==0)ans.push_back(x/(i+1));
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto& it:ans)cout<<it<<" ";
    cout<<endl;
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