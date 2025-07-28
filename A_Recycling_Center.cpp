#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>ar;
    for(auto& it:a)
    {
        if(it<=c)
        {
            int t=0,x=it;
            while(x<=c/2)
            {
                x*=2,t++;
            }
            ar.push_back(t);
        }
    }
    sort(ar.begin(),ar.end());
    int res=0,t=0;
    for(auto& it:ar)
    {
        if(t<=it)res++,t++;
    }
    cout<<n-res<<endl;
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