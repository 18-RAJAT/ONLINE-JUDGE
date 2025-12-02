#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    n*=2;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    map<int,int>ar;
    for(auto& it:a)ar[it]++;
    int o=0,e=0,chk=0;
    for(auto& it:ar)
    {
        if(it.second&1)chk++;
        else if((it.second/2)&1)o++;
        else e++;
    }
    int ans=chk+2*o;
    if(!chk && (e&1))e--;
    ans+=2*e;
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