#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a,ok(1<<n,0);
    int mask=(1<<n)-1;
    while(mask>=1)
    {
        for(int i=0;i<(1<<n);++i)
        {
            if((mask&i)==mask)
            {
                if(!ok[i])
                {
                    a.push_back(i);
                    ok[i]=1;
                }
            }
        }
        mask>>=1;
    }
    for(auto& it:a)cout<<it<<" ";
    for(int i=0;i<(1<<n);++i)
    {
        if(!ok[i])cout<<i<<" ";
    }
    cout<<endl;
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