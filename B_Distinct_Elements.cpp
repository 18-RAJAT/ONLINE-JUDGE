#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
   int n;cin>>n;
   vector<int>a(n),b(n);
   for(int i=0;i<n;++i)cin>>a[i];
   int res=1;
   for(int i=0;i<n;++i)
   {
      int chk=a[i]-(i?a[i-1]:0);
      if(i-chk<0)b[i]=res++;
      else b[i]=b[i-chk];
   }
   for(int i=0;i<n;++i)cout<<b[i]<<" ";
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