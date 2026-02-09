#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<char>a(n*m);
    int tot=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            int x;
            cin>>x;
            a[i*m+j]=x;
            tot+=x;
        }
    }
    int res=tot/2;
    cout<<res*(tot-res)<<endl;
    if(res==0)
    {
        string s;
        s.reserve(n+m);
        s+=string(n,'D');
        s+=string(m,'R');
        cout<<s<<endl;
        return;
    }
    int cur=0,c=1,r=1,ok=0;
    for(int i=1;i<=m && !ok;++i)
    {
        for(int j=n;j>=1;--j)
        {
            cur+=a[(j-1)*m+(i-1)];
            if(cur==res)
            {
                c=i,r=j,ok=1;
                break;
            }
        }
    }
    int C=c-1,R=r-1;
    string s;
    s+=string(C,'R');
    s+=string(R,'D');
    s+='R';
    s+=string(n-R,'D');
    s+=string(m-C-1,'R');
    cout<<s<<endl;
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