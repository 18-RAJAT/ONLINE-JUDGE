#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)a[i%4]++;  
    cout<<((a[0]==a[1] && a[1]==a[2] && a[2]==a[3])?"Bob":"Alice")<<endl;
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