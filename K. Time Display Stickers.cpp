#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(10);
    for(auto& it:s)a[it-'0']++;
    int res=0,c0=a[0],c1=a[1];
    for(int i=0;i<=5;++i)res+=a[i];
    int ans1=n/4,ans2=res/2,ans3=c0+c1/2,ans4=(res+c0)/3;
    int ans=min({ans1,ans2,ans3,ans4});
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