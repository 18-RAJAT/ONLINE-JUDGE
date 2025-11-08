#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(n<=500)
    {
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(a[j]%a[i]%2==0)
                {
                    cout<<a[i]<<" "<<a[j]<<endl;
                    return;
                }
            }
        }
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0;i+2<n;++i)
        {
            if(a[i]*2<=a[i+2])continue;
            vector<pair<int,int>>p={{a[i],a[i+1]},{a[i],a[i+2]},{a[i+1],a[i+2]}};
            for(auto& pr:p)
            {
                if(pr.first%2==pr.second%2)
                {
                    cout<<pr.first<<" "<<pr.second<<endl;
                    return;
                }
            }
        }
    }
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