#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n,p,q;
    cin>>n>>p>>q;
    string s;
    cin>>s;
    for(int i=0;i<=105;++i)
    {
        for(int j=0;j<=105;++j)
        {
            if(i*p+j*q==n)
            {
                cout<<i+j<<endl;
                int cnt=0;
                for(int k=1;k<=i;++k)
                {
                    for(int l=0;l<p;++l)cout<<s[cnt],cnt++;
                    cout<<endl;
                }
                for(int k=1;k<=j;++k)
                {
                    for(int l=0;l<q;++l)cout<<s[cnt],cnt++;
                    cout<<endl;
                }
                return;
            }
        }
    }
    cout<<-1;
}
signed main()
{
    sol();
    return 0;
}