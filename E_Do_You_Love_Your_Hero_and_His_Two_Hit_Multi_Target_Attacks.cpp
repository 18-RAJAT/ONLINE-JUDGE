#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    //RNG->2*P+R | P>=R | R>=0 | BOUND->>500 & -P
    if(n==0)
    {
        cout<<0<<endl;
        return;
    }
    int ok=0,P=0;
    vector<int>R;
    for(int i=1;i<=500 && !ok;++i)
    {
        int res=i*(i-1)/2;
        if(n<res)break;
        vector<int>a;
        int rem=n-res,tmp=i;
        while(rem>0)
        {
            int x=floor((1.0+sqrt(1.0+8.0*rem))/2.0);
            while(x>=2 && x*(x-1)/2>rem)x--;
            if(x<2)break;
            rem-=x*(x-1)/2;
            a.push_back(x);
            tmp+=x;
            if(tmp>500)break;
        }
        if(rem==0 && tmp<=500)
        {
            ok=1,P=i,R=a;
        }
    }
    if(!ok)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int>ar,br;
    for(int i=0;i<P;++i)
    {
        ar.push_back(i);
        br.push_back(0);
    }
    for(int j=0;j<R.size();++j)
    {
        int sz=R[j],tot=P+j;
        for(int i=1;i<=sz;++i)
        {
            ar.push_back(tot);
            br.push_back(i);
        }
    }
    cout<<ar.size()<<endl;
    for(int i=0;i<ar.size();++i)
    {
        cout<<ar[i]<<" "<<br[i]<<endl;
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