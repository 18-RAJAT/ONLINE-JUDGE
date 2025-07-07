#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(i==j)continue;
            if(a[j]<a[i])
            {
                cout<<"YES"<<endl;
                cout<<2<<endl<<a[i]<<" "<<a[j]<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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