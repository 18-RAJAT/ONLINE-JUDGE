#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int m=*min_element(a.begin(),a.end());
    int p=0,cnt=0;
    vector<int>q;
    for(auto& it:a)
    {
        if(it%m==0)
        {
            p++;
            if(it==m)cnt++;
            else q.push_back(it/m);
        }
    }
    if(p<2)
    {
        cout<<"No"<<endl;
        return;
    }
    if(cnt>=2)
    {
        cout<<"Yes"<<endl;
        return;
    }
    int g=q[0];
    for(int i=1;i<q.size();++i)g=__gcd(g,q[i]);
    cout<<(g==1?"Yes":"No")<<endl;
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