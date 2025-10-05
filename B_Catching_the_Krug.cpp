#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
   int n;
   cin>>n;
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int ans=0;
   if(a<c)ans=max(ans,c);
   if(a>c)ans=max(ans,n-c);
   if(b<d)ans=max(ans,d);
   if(d<b)ans=max(ans,n-d);
   cout<<ans<<endl;
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