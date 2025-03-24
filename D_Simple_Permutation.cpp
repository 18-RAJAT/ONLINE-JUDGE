#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>prime(200005,1);
void sol()
{
    int n;
    cin>>n;
    int ok=1;
    for(int i=1;i<=2*n/3;++i)if(prime[i])ok=i;//ok|=prime[i]*i;
    vector<int>ar;
    int l=ok-1,r=ok+1;
    ar.push_back(ok);
    while(l>=1 || r<=n)
    {
        if(r<=n)ar.push_back(r++);
        if(l>=1)ar.push_back(l--);
        // if(ok==l && ok==r)break;
    }
    //Range is->> [l,r]:1->l & r->n
    for(int i=1;i<=l;++i)ar.push_back(i);
    for(int i=r;i<=n;++i)ar.push_back(i);
    for(int i=0;i<n;++i)cout<<ar[i]<<" ";
    cout<<endl;
}
signed main()
{
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=200000;++i)
    {
        if(prime[i])for(int j=i*i;j<=200000;j+=i)prime[j]=0;
    }
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}