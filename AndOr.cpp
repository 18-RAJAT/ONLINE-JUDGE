#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1),e(n+1);
    for(int i=1;i<=n;++i)cin>>a[i];
    e[1]=a[1];
    for(int i=2;i<=n;++i)e[i]=i%2?e[i-1]|a[i]:e[i-1]&a[i];
    int q;
    cin>>q;
    while(q--)
    {
        int p,x;
        cin>>p>>x;
        if(a[p]!=x)
        {
            a[p]=x;
            int s=p,c=0;
            if(p==1){if(e[1]!=a[1])e[1]=a[1],s=2,c=1;}
            else
            {
                int v=p%2?e[p-1]|a[p]:e[p-1]&a[p];
                if(e[p]!=v)e[p]=v,s=p+1,c=1;
            }
            if(c)for(int i=s;i<=n;++i)
            {
                int v=i%2?e[i-1]|a[i]:e[i-1]&a[i];
                if(e[i]!=v)e[i]=v;
                else break;
            }
        }
        cout<<e[n]<<endl;
    }
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