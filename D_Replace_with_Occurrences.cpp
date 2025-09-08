#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<vector<int>>ar(n+1);
    for(int i=0;i<n;++i)ar[a[i]].push_back(i);
    vector<int>b(n,0);
    int ok=1,res=1;
    for(int k=1;k<=n && ok;++k)
    {
        int sz=ar[k].size();
        if(sz%k)
        {
            ok=0;
            break;
        }
        for(int i=0;i<sz;i+=k)
        {
            for(auto& idx:vector<int>(ar[k].begin()+i,ar[k].begin()+i+k))b[idx]=res;
            res++;
        }
    }
    if(!ok)cout<<-1<<endl;
    else
    {
        copy(b.begin(),b.end(),ostream_iterator<int>(cout," "));
        cout<<endl;
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