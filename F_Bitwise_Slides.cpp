#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=1000000007;
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=1;
    unordered_map<int,int>mp;
    mp.reserve(n+10);
    int res=ans;
    for(int i=0;i<n;++i)
    {
        int tp=a[i],rem=0;
        if(mp.count(tp))rem=mp[tp]%Mod;
        unordered_map<int,int>mp1;
        mp1.reserve(mp.size()+10);
        for(auto& it:mp)
        {
            int F=it.first,S=it.second;
            (F==tp)?mp1[tp]=(mp1[tp]+(2*S)%Mod)%Mod:mp1[F^tp]=(mp1[F^tp]+S)%Mod;
            // if(F==tp)rem=(rem+S)%Mod;
        }
        //f(S,i)=f(S,i−1)+f(S,i−1)+f(S|(tp),i−1)=3*f(S,i−1)
        mp1[tp]=(mp1[tp]+(3*ans)%Mod)%Mod,mp1[tp]%=Mod,ans=rem%Mod;
        //mp1[tp]=(mp1[tp]+ans%Mod)%Mod,mp1[tp]%=Mod,ans=rem%Mod;
        mp=move(mp1);
        int tot=accumulate(mp.begin(),mp.end(),0LL,[&](int s,pair<int,int>p){return(s+p.second)%Mod;});
        res=(ans+tot)%Mod;
    }
    cout<<res%Mod<<endl;
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