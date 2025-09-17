#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ok=0,res=1;
    for(int i=1;i<n;++i)
    {
        if(a[i]>a[i-1] && ok==0)continue;
        else if(a[i]>a[i-1] && ok==1){res=0;break;}
        else if(a[i]<a[i-1] && ok==0)ok=1;
        else if(a[i]<a[i-1] && ok==1)continue;
    }
    cout<<((res)?"YES":"NO")<<endl;
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