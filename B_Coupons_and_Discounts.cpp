#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n+5]={0};
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        if(a[i]&1 && a[i]>=1)a[i+1]--;
        else if(a[i]<0)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<(a[n]<0?"NO":"YES");
}
signed main()
{
    sol();
    return 0;
}