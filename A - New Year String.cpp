#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=(s.find("2025")!=-1),y=(s.find("2026")!=-1);
    cout<<(x==1 && y==0?"1":"0")<<endl;
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