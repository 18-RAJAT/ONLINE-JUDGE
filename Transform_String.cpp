#include<bits/stdc++.h>
using namespace std;
#define int long long
#define uc unsigned char
void sol()
{
    string a,b;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    vector<vector<int>>pos(256);
    for(int i=0;i<n;++i)pos[(uc)a[i]].push_back(i+1);
    int s=0,c=n+1,ok=1;
    for(int i=m-1;~i;--i)
    {
        char ch=b[i];
        if(pos[(uc)ch].empty()){ok=0;break;}
        auto& v=pos[(uc)ch];
        auto it=lower_bound(v.begin(),v.end(),c);
        if(it==v.begin()){ok=0;break;}
        s+=*(--it);
        c=*it;
    }
    if(!ok){cout<<-1<<endl;return;}
    cout<<(m+1)*n-m*(m+1)/2-s<<endl;
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