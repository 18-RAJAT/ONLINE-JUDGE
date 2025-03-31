#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int o=0,e=0,o1=0,e1=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]&1)(i&1)?e1++:o1++;
        if((b[i]&1)==0)(i&1)?o++:e++;
    }
    cout<<(o>=o1 && e>=e1?"YES":"NO")<<endl;
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