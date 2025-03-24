#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==1)
        {
            int y=i+1;
            while(y<n && a[y]==0)y++;
            if(y==n)
            {
                ans++;
                break;
            }
            int gap=y-i;
            if(gap>=3)
            {
                ans++;
                i=y-1;
                continue;
            }
            else
            {
                i=y-1,ans+=gap;
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}