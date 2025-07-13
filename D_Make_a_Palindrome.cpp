#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(n<=2)
    {
        cout<<"YES"<<endl;
        return;
    }
    auto b=a;
    sort(b.begin(),b.end());
    vector<int>c;
    for(int i=0;i<n;++i)
    {
        if(a[i]<=b[k-1])c.push_back(a[i]);
    }
    int res=0,l=0,r=c.size()-1;
    while(l<r)
    {
        if(c[l]==c[r])
        {
            res+=2;l++;r--;
        }
        else if(c[l]<b[k-1] && c[r]<b[k-1])
        {
            res=-1;
            break;
        }
        else if(c[l]<b[k-1])r--;
        else if(c[r]<b[k-1])l++;
    }
    if(l==r)res++;
    cout<<((k-1<=res)?"YES":"NO")<<endl;
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