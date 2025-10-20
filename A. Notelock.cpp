#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int res=0,ans=0;
   for(int i=0;i<n;++i)
   {
      if(s[i]=='1')
      {
         if(!res)ans++;
         res++;
      }
      if(i>=k-1)res-=s[i-k+1]-'0';
   }
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