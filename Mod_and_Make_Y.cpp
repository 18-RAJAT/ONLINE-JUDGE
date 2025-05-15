#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    vector<int>ar,br,vis(x+1,0);
    queue<int>q;
    vis[x]=1;
    int ok=0;
    for(int i=0;i<n;++i)
    {
        int temp=a[i];
        if(temp<=y)ok=1;
        if(!ok)
        {
            if(y<temp)
            {
                br.push_back(temp);
                for(int j=temp;j<=x;++j)
                {
                    if(vis[j])
                    {
                        int r=j%temp;
                        if(!vis[r])
                        {
                            vis[r]=1;
                            q.push(r);
                        }
                    }
                }
                while(!q.empty())
                {
                    auto u=q.front();
                    q.pop();
                    for(auto& it:br)
                    {
                        if(u>=it)
                        {
                            int tp=u%it;
                            if(!vis[tp])
                            {
                                vis[tp]=1;
                                q.push(tp);
                            }
                        }
                    }
                    // cout<<u<<" ";
                }
            }
            if(vis[y])ar.push_back(i+1);
        }
    }
    int sz=ar.size();
    cout<<sz<<endl;
    if(sz)
    {
        for(int i=0;i<sz;++i)
        {
            if(i)cout<<" ";
            cout<<ar[i];
        }
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