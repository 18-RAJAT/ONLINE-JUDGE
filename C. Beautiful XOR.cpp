#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int a,b;
    cin>>a>>b;
    vector<int>ans;
    for(int i=0;i<=30;++i)
    {
        if((1<<i)>a)continue;
        if(((a>>i)&1)!=((b>>i)&1))
        {
            ans.push_back((1<<i));
            a^=(1<<i);
        }
    }
    if(a!=b)cout<<-1<<endl;
    else
    {
        cout<<ans.size()<<endl;
        for(auto& it:ans)cout<<it<<" ";
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