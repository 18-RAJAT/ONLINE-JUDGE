#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==k)
    {
        for(int i=0;i<n;++i)
        cout<<'-';cout<<endl;
        return;
    }
    int z=count(s.begin(),s.end(),'0'),o=count(s.begin(),s.end(),'1');
    int chk=k-z-o,l=z+1,r=n-o;
    vector<char>ans(n+5,'-');
    vector<int>idx(r-l+1);
    iota(idx.begin(),idx.end(),l);
    transform(idx.begin(),idx.end(),idx.begin(),[&](int i)
    {
        int mn=min(i-l+1,r-i+1);
        ans[i]=(chk<mn?'+':'?');
        return i;
    });
    for_each(next(ans.begin()),next(ans.begin(),n+1),[&](char c){cout<<c;});
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