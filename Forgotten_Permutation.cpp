#include<bits/stdc++.h>
using namespace std;
#define int long long

//Rajat joshi template
const int Mod=1000000007;
vector<int>Ft;
void Compute(int n)
{
    Ft.resize(n+1);
    Ft[0]=1;
    for(int i=1;i<=n;++i)Ft[i]=(Ft[i-1]*i)%Mod;
}
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m+1);
    for(int i=1;i<=m;++i)cin>>a[i];
    vector<int>b(m+1,0);
    for(int i=2;i<=m;++i)b[i]=a[i-1]-b[i-1];
    int l=-LLONG_MAX/2,r=LLONG_MAX/2;
    for(int i=1;i<=m;++i)
    {
        int li=i%2?1-b[i]:b[i]-n,ri=i%2?n-b[i]:b[i]-1;
        // cout<<li<<" "<<ri<<endl;
        l=max(l,li),r=min(r,ri);
    }
    if(l>r){cout<<0<<endl;return;}
    vector<int>odd,even;
    for(int i=1;i<=m;++i)(i%2?odd:even).push_back(b[i]);
    auto recur=[&](vector<int>& v)->bool
    {
        sort(v.begin(),v.end());
        for(int i=1;i<(int)v.size();++i)if(v[i]==v[i-1])return false;return true;
    };
    if(!recur(odd) || !recur(even)){cout<<0<<endl;return;}
    if(m%2)
    {
        if((a[m]-b[m])%2){cout<<0<<endl;return;}
        int calc=(a[m]-b[m])/2;
        if(calc<l || calc>r){cout<<0<<endl;return;}
        unordered_set<int>st(even.begin(),even.end());
        for(auto& it:odd)if(st.count(2*calc+it)){cout<<0<<endl;return;}
        // cout<<"Move";
        unordered_set<int>st1;
        for(int i=1;i<=m;++i)
        {
            int p=i%2?calc+b[i]:-calc+b[i];
            if(p<1 || p>n || st1.count(p)){cout<<0<<endl;return;}
            // cout<<p<<" ";
            st1.insert(p);
        }
        cout<<Ft[n-m]%Mod<<endl;
    }
    else
    {
        if(a[m]!=b[m]){cout<<0<<endl;return;}
        int cnt=r-l+1;
        unordered_set<int>nst;
        sort(odd.begin(),odd.end()),sort(even.begin(),even.end());
        for(auto& u:odd)
        {
            int lft=2*l+u,ryt=2*r+u;
            auto lo=lower_bound(even.begin(),even.end(),lft),hi=upper_bound(even.begin(),even.end(),ryt);
            // cout<<u<<" "<<lft<<" "<<ryt<<" "<<lo-odd.begin()<<" "<<hi-odd.begin()<<endl;
            for(auto it=lo;it!=hi;++it)if((*it-u)%2==0)nst.insert((*it-u)/2);
        }
        // cout<<nst.size()<<endl;
        cnt-=nst.size();
        if(cnt<0)cnt=0;
        cout<<(cnt%Mod)*Ft[n-m]%Mod<<endl;
    }
}
signed main()
{
    int t;
    cin>>t;
    Compute(2000005);
    while(t--)
    {
        sol();
    }
    return 0;
}