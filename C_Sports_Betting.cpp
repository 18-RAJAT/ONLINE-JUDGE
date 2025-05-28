#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    int res=0,ok=0,tp=a[0];
    for(auto& it:mp)
    {
        int F=it.first,S=it.second;
        if(F!=tp)ok=0;
        tp=F+1;
        if(S>3)res=1;
        else if(S>1)
        {
            if(ok)res=1;
            ok=1;
        }
    }
    cout<<((res)?"Yes":"No")<<endl;
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