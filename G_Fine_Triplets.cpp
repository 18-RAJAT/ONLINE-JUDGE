#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Pi 3.1415926535897932384626433832795
#define cd complex<double>
auto recur=[](vector<cd>& a,bool x)
{
    int n=a.size();
    for(int i=1,j=0;i<n;++i)
    {
        int b=n>>1;
        for(;j&b;b>>=1)j-=b;
        j+=b;
        if(i<j)swap(a[i],a[j]);
        // else if(i==j)break;
        // else continue;
    }
    // cos(-ang)=cos(ang);=-1 for sin=1
    for(int l=2;l<=n;l<<=1)
    {
        double ang=2*Pi/l*(x?-1:1);
        cd chk(cos(ang),sin(ang));
        // cout<<"chk-> "<<chk<<endl;
        for(int i=0;i<n;i+=l)
        {
            cd rem(1);
            for(int j=0;j<l/2;++j)
            {
                auto u=a[i+j],v=a[i+j+l/2]*rem;
                // cout<<"u-> "<<u<<" v-> "<<v<<endl;
                a[i+j]=u+v,a[i+j+l/2]=u-v;
                rem*=chk;
            }
            // cout<<a[i+l/2]<<" ";
        }
        // cd tmp(tan(ang/2));
        // for(int i=0;i<l/2;++i)
        // {
        //     auto u=a[i],v=a[i+l/2];
        //     a[i]=u+v,a[i+l/2]=u-v;
        // }
        // cout<<"Tan-> "<<tmp<<endl;
    }
    if(x)for(auto& it:a)it/=n;
};
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mx=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    auto check=[](int n){int p=1;while(p<n)p<<=1;return p;};
    int s=mx+1,p=check(2*2*s);
    vector<cd>f(p);
    for(int i=0;i<n;++i)f[a[i]]={1,0};
    recur(f,0);
    for(auto& it:f)it*=it;
    recur(f,1);
    int ans=0;
    for(auto& it:a)
    {
        int c=round(f[2*it].real());
        //recheck
        if(~c && f[2*it].imag()==0)
        {
            ans++;
            continue;
        }
        if(c>=1)ans+=(c-1)/2;
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
}