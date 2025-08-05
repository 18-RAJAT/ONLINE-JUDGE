#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m),ans;
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)cin>>b[i];
    int i=0,j=0,ok=0;
    while(i<n && j<m)
    {
        if(a[i]<=k)
        {
            ans.push_back(a[i]);
            if(a[i]==0)k++;
            i++;
        }
        else if(b[j]<=k)
        {
            ans.push_back(b[j]);
            if(b[j]==0)k++;
            j++;
        }
        else
        {
            ok=1;
            break;
        }
    }
    while(!ok && i<n)
    {
        if(a[i]<=k)
        {
            ans.push_back(a[i]);
            if(a[i]==0)k++;
            i++;
        }
        else
        {
            ok=1;
            break;
        }
    }
    while(!ok && j<m)
    {
        if(b[j]<=k)
        {
            ans.push_back(b[j]);
            if(b[j]==0)k++;
            j++;
        }
        else
        {
            ok=1;
            break;
        }
    }
    if(ok)cout<<"-1"<<endl;
    else
    {
        for(auto& it:ans)cout<<it<<" ";
        cout<<endl;
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