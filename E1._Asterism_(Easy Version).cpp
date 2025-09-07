#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,p;
    cin>>n>>p;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end());
    int mn=a[0],mx=a[n-1];
    vector<int>ans;
    for(int j=mn;j<=mx;++j)
    {
        int tmp=j,ok=1;
        for(int i=0;i<n;++i)
        {
            int UB=upper_bound(a.begin(),a.end(),tmp)-a.begin();
            ok=ok*(UB-i)%p;
            tmp++;
        }
        if(ok)ans.push_back(j);
    }
    cout<<ans.size()<<endl;
    copy(ans.begin(),ans.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}