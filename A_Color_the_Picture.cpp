#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(k);
    for(int i=0;i<k;++i)cin>>a[i];
    int x=0,y=0,p=0,q=0;
    for(int i=0;i<k;++i)
    {
        int t1=a[i]/n;
        if(t1>=2)
        {
            x+=t1;
            if(t1>2)p=1,q=1;
        }
        int t2=a[i]/m;
        if(t2>=2)
        {
            y+=t2;
            if(t2>2)q=1,p=1;
        }
    }
    cout<<((n<=y && (n%2==0 || q)) || ((m<=x && (m%2==0 || p)) && (n!=y || m!=x))?"Yes":"No")<<endl;
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