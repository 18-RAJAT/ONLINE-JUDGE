#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>R(n),C(m);
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        R[i]=accumulate(s.begin(),s.end(),0LL,[](int x,char ch){return x^(ch-'0');});
        transform(s.begin(),s.end(),C.begin(),C.begin(),[](char x,int ch){return ch^(x-'0');});
    }
    cout<<max(accumulate(R.begin(),R.end(),0LL),accumulate(C.begin(),C.end(),0LL))<<endl;
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