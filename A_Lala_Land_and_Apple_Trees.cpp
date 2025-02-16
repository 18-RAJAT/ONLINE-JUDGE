#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<array<int,2>>a(n);
    int ans=0,l=0,r=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i][0]>>a[i][1];
        (a[i][0]<0)?l++:r++;
    }
    if(l<r)
    {
        sort(a.begin(),a.end());
        int x=0,y=0;
        for(int i=0;i<n;++i)
        {
            if(a[i][0]<0 && x<l)ans+=a[i][1],x++;
            else if(a[i][0]>0 && y<l+1)ans+=a[i][1],y++;
        }
    }
    else if(l>r)
    {
        sort(a.rbegin(),a.rend());
        int x=0,y=0;
        for(int i=0;i<n;++i)
        {
            if(a[i][0]>0 && x<r)ans+=a[i][1],x++;
            else if(a[i][0]<0 && y<r+1)ans+=a[i][1],y++;
        }
    }
    else for(int i=0;i<n;++i)ans+=a[i][1];
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}