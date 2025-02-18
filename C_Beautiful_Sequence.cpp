#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int x=0,y=0,z=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==1)x=fmod(x+1,Mod);
        else if(a[i]==2)y=fmod(y*2+x,Mod);
        else z=fmod(y+z,Mod);
    }
    cout<<z%Mod<<endl;
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