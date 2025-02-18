#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod=998244353;
int pali(string& s)
{
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    return s==tmp;
}
void sol()
{
    string s;
    cin>>s;
    int n=s.size();
    if(pali(s))
    {
        cout<<0<<endl;
        return;
    }
    vector<int>ar(n/2,0);
    int cnt=0;
    for(int i=0;i<n/2;++i)if(s[i]!=s[n-1-i])ar[i]=1,cnt++;
    auto swaps=[&](int cur,int x){return cur==x?s[x+1]:cur==x+1?s[x]:s[cur];};
    int ok=0;
    for(int k=0;k<n-1;++k)
    {
        int tmp=cnt;
        auto recur=[&](int i)
        {
            if(i>=0 && i<n/2)
            {
                int res=ar[i],j=n-1-i,val=swaps(i,k)!=swaps(j,k);
                tmp+=val-res;
            }
        };
        //0->>k-1 and n-1->n-1-k....
        vector<int>br={k,k+1,n-1-k,n-1-(k+1)};
        for(auto& it:br)recur(it);
        if(tmp==0)
        {
            ok=1;
            break;
        }
    }
    cout<<(ok?2:3)<<endl;
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