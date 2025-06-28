#include<bits/stdc++.h>
using namespace std;
#define int long long
int Pow(int b,int e,int l)
{
    int res=1;
    for(int i=0;i<e;++i)
    {
        if(b>l/res)return -1;
        res*=b;
    }
    return res;
}
void sol()
{
    int l,r;
    cin>>l>>r;
    int L=max(2LL,l+1),R=r,cnt=0;
    if(L<=R)
    {
        int mx=sqrt(r);
        vector<char>ch(mx+1,1);
        ch[0]=ch[1]=0;
        for(int i=2;i*i<=mx;++i)
        {
            if(ch[i])
            {
                for(int j=i*i;j<=mx;j+=i)ch[j]=0;
            }
        }
        vector<int>primes;
        for(int i=2;i<=mx;++i)
        {
            if(ch[i])primes.push_back(i);
        }
        vector<char>ar(R-L+1,1);
        for(auto& it:primes)
        {
            int mx=max(it*it,(L+it-1)/it*it);
            for(int j=mx;j<=R;j+=it)ar[j-L]=0;
        }
        for(int i=0;i<ar.size();++i)if(ar[i])cnt++;
    }
    int mx=sqrt(r),Pc=0;
    vector<char>ch(mx+1,1);
    ch[0]=ch[1]=0;
    for(int i=2;i*i<=mx;++i)
    {
        if(ch[i])
        {
            for(int j=i*i;j<=mx;j+=i)ch[j]=0;
        }
    }
    vector<int>primes;
    for(int i=2;i<=mx;++i)if(ch[i])primes.push_back(i);
    for(int k=2;;++k)
    {
        if(Pow(2,k,r)==-1)break;
        for(auto& it:primes)
        {
            int tp=Pow(it,k,r);
            if(tp==-1)break;
            if(l<tp)Pc++;
        }
    }
    cout<<1+cnt+Pc<<endl;
}
signed main()
{
    sol();
    return 0;
}