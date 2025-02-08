#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int sa=0,sb=0,A=0,B=0,cnt=0;
    for(int i=0;i<n;++i)cin>>a[i],sa+=a[i];
    for(int i=0;i<n;++i)cin>>b[i],sb+=b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    while(!a.empty() || !b.empty() || cnt<n-1)
    {
        if(~cnt&1)
        {
            if((b.back()<a.back() && !a.empty()) || b.empty()) A+=a.back(),sa-=a.back(),a.pop_back();
            else sb-=b.back(),b.pop_back();
        }
        else
        {
            if(a.back()<b.back() && !b.empty() || a.empty()) B+=b.back(),sb-=b.back(),b.pop_back();
            else sa-=a.back(),a.pop_back();
        }
        cnt++;
    }
    cout<<A-B<<endl;
}
signed main()
{
    sol();
    return 0;
}