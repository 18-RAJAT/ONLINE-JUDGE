#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    set<int>s;
    for(int i=0;i<m;++i)
    {
    	int x;
    	cin>>x;
    	s.insert(x);
    }
    vector<int>a;
    for(int i=1;i<=n;++i)if(!s.count(i))a.push_back(i);
    cout<<a.size()<<endl;
    for(auto& it:a)cout<<it<<" ";
}
signed main()
{
    sol();
    return 0;
}