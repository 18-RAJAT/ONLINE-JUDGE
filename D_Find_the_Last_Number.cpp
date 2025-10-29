#include"bits/stdc++.h"
using namespace std;
#define int long long
int ar[20005],br[20005];
void sol()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;++i)
    {
        v.push_back(i);
        br[i]=0;
    }
    for(int i=0;(1<<i)<=n;++i)
    {
        if(v.size()==1)
        {
            break;
        }
        vector<int>a,b;
        for(auto& it:v)
        {
            if(it&(1<<i))a.push_back(it);
            else b.push_back(it);
        }
        int chk=0;
        for(int j=1;j<n;++j)
        {
            if(br[j])
            {
                continue;
            }
            cout<<"? "<<j<<" "<<(1<<i)<<"\n";
            cout.flush();
            cin>>ar[j];
            chk+=ar[j];
        }
        bool ok=chk==a.size();
        for(int j=1;j<n;++j)
        {
            if(ar[j]==ok)br[j]=1;
            ar[j]=0;
        }
        (ok)?v=b:v=a;
    }
    cout<<"! "<<v[0]<<endl;
    cout.flush();
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