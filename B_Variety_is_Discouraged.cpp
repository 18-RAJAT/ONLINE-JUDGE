#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    map<int,int>f,l;
    for(int i=0;i<n;++i)
    {
        if(!f.count(a[i]))f[a[i]]=i+1;
        l[a[i]]=i+1;
    }
    vector<int>e;
    for(auto& it:f)e.push_back(it.first);
    sort(e.begin(),e.end(),[&](int x,int y){return f[x]<f[y];});
    int m=e.size();
    vector<int>pref,suf,res(m);
    for(auto& it:e)pref.push_back(f[it]),suf.push_back(l[it]);
    res[m-1]=suf[m-1];
    for(int i=m-2;~i;--i)res[i]=max(suf[i],res[i+1]);
    int ans=LLONG_MIN,pre=0,nxt=0,x=0,y=0,p=0,q=0;
    for(int i=0;i<m;++i)
    {
        int L=pref[i],R=res[i],cnt=m-i,chk=cnt-(R-L+1),sza=R-L+1;
        if(ans<chk)
        {
            ans=chk,x=sza,pre=L,nxt=R;
        }
        else if(chk==ans && sza>x)
        {
            x=sza,pre=L,nxt=R;
        }
        if(chk==0 && sza>y)
        {
            y=sza,p=L,q=R;
        }
    }
    if(ans>0)cout<<pre<<" "<<nxt<<endl;
    else if(y>0)cout<<p<<" "<<q<<endl;
    else cout<<0<<endl;
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