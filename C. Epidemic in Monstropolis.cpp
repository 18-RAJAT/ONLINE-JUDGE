#include"bits/stdc++.h"
using namespace std;
#define int long long
int a[605],b[605];
int n,k;
void sol()
{
    cin>>n;
    for(int i=1;i<=n;++i)cin>>a[i];
    cin>>k;
    for(int i=1;i<=k;++i)cin>>b[i];
    vector<int>r;
    int cur=1;
    for(int i=1;i<=k;++i)
    {
        while(cur<=n && b[i]>0)
        {
            b[i]-=a[cur];
            cur++;
        }
        if(b[i]!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        r.push_back(cur-1);
    }
    if(cur!=n+1)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<int>ar;
    vector<char>ch;
    for(int i=0;i<k;++i)
    {
        int p=i?r[i-1]+1:1,q=r[i];
        int mx=0,tmp=p;
        for(int j=p;j<=q;++j)
        {
            if(a[j]>mx)
            {
                mx=a[j];
                tmp=j;
            }
        }
        int j=tmp;
        if(j==p)
        {
            while(j<q && a[j+1]==mx)j++;
            if(j==q && q!=p)
            {
                cout<<"NO"<<endl;
                return;
            }
            for(int t=j+1;t<=q;++t)
            {
                ar.push_back(i+j-p+1);
                ch.push_back('R');
            }
            for(int t=j;t>p;--t)
            {
                ar.push_back(i+t-p+1);
                ch.push_back('L');
            }
        }
        else
        {
            for(int t=j;t>p;--t)
            {
                ar.push_back(i+t-p+1);
                ch.push_back('L');
            }
            for(int t=j+1;t<=q;++t)
            {
                ar.push_back(i+1);
                ch.push_back('R');
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<ar.size();++i)cout<<ar[i]<<" "<<ch[i]<<endl;
}
signed main()
{
    sol();
    return 0;
}