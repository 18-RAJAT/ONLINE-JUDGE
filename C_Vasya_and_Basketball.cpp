#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;++i)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    auto score=[&](vector<int>& ar,int x)->int
    {
        int UB=upper_bound(ar.begin(),ar.end(),x)-ar.begin();
        int rem=ar.size()-UB;
        return 2*UB+3*rem;
    };
    int maximum=LLONG_MIN,BestA=0,BestB=0;
    vector<int>check;
    check.reserve(n+m);
    for(int i=0;i<n;++i)check.push_back(a[i]);
    for(int i=0;i<m;++i)check.push_back(b[i]);
    sort(check.begin(),check.end());
    check.erase(unique(check.begin(),check.end()),check.end());
    for(auto& it:check)
    {
        int A=score(a,it),B=score(b,it);
        int advantage=A-B;
        if(advantage>maximum || (advantage==maximum && A>BestA) || (advantage==maximum && A==BestA && B>BestB))
        {
            maximum=advantage,BestA=A,BestB=B;
        }
    }
    int sa=3*n,sb=3*m,adv=sa-sb;
    if(adv>maximum || (adv==maximum && sa>BestA) || (adv==maximum && sa==BestA && sb>BestB))
    {
        maximum=adv,BestA=sa,BestB=sb;
    }
    cout<<BestA<<":"<<BestB<<endl;
}
signed main()
{
    sol();
    return 0;
}