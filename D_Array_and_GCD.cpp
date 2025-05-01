#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>primes;
const int N=1e7+5,NN=5e5+5;
int sieve[N];
void recur()
{
    sieve[0]=sieve[1]=1;
    for(int i=2;i<N && primes.size()<NN;++i)
    {
        if(sieve[i])continue;
        for(int j=i+i;j<N;j+=i)sieve[j]=1;
        primes.push_back(i);
    }
}
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int sum=0,ans=0;
    for(int i=0;i<n;++i)
    {
        sum+=a[i]-primes[i];
        if(sum>=0)ans=i+1;
    }
    cout<<n-ans<<endl;
}
signed main()
{
    recur();
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}