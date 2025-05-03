#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int check=0,ans=0;
    for(int i=0;i<n;++i)
    {
        while(check!=a[i])
        {
            if(a[i]<check)check--,ans++;
            else check++,ans++;
        }
        ans+=1+(i<n-1);
    }
    cout<<ans;
}
signed main()
{
    sol();
    return 0;
}