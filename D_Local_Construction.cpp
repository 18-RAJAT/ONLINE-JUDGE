#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n+1),arr(n+1),deg(n+1),chk(n+1),res(n+1);
    vector<vector<int>>g(n+1);
    int mx=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]>=1)mx=max(mx,a[i]);
    }
    for(int i=1;i<=n;++i)arr[i]=(a[i]==-1?mx+1:a[i]);
    vector<int>rem(n);
    iota(rem.begin(),rem.end(),1);
    for(int j=1;j<=mx;++j)
    {
        vector<int>nxt;
        for(auto& it:rem)if(j<arr[it])nxt.push_back(it);
        for(int i=0;i<rem.size();++i)chk[rem[i]]=i;
        int ok=j&1;
        for(auto& it:nxt)
        {
            int id=chk[it];
            if(id>=1)
            {
                int l=rem[id-1];
                if(ok)
                {
                    g[it].push_back(l);
                    deg[l]++;
                }
                else
                {
                    g[l].push_back(it);
                    deg[it]++;
                }
            }
            if(id+1<rem.size())
            {
                int r=rem[id+1];
                if(ok)
                {
                    g[it].push_back(r);
                    deg[r]++;
                }
                else
                {
                    g[r].push_back(it);
                    deg[it]++;
                }
            }
        }
        for(auto& it:rem)
        {
            if(arr[it]<=j)
            {
                auto LB=lower_bound(nxt.begin(),nxt.end(),it);
                int res;
                if(LB==nxt.begin())res=nxt[0];
                else if(LB==nxt.end())res=nxt.back();
                else res=*(LB-1);
                if(ok)
                {
                    g[res].push_back(it);
                    deg[it]++;
                }
                //Not req
                // else if(arr[it]==arr[res])
                // {
                //     deg[it]++;
                //     deg[res]++;
                //     g[it].push_back(res);
                //     g[res].push_back(it);
                // }
                else
                {
                    g[it].push_back(res);
                    deg[res]++;
                }
            }
            // cout<<it<<" "<<deg[it]<<endl;
            // for(auto& jt:g[it])
            // {
            //     int id=chk[jt],pr=rem[id-1],nxt=rem[id+1];
            //     if(arr[it]<=j && arr[jt]<=j)deg[it]++,deg[jt]++,g[it].push_back(jt),g[jt].push_back(it);
            //     // cout<<jt<<" "<<deg[jt]<<endl;
            // }
        }
        rem.swap(nxt);
    }
    vector<int>ans;
    for(int i=1;i<=n;++i)if(!deg[i])ans.push_back(i);
    // for(auto& it:ans)res[it]=1;
    int i=0,cnt=1;
    while(i<ans.size())
    {
        int tmp=ans[i++];
        res[tmp]=cnt++;
        for(auto& it:g[tmp])if(--deg[it]==0)ans.push_back(it);
        // cout<<"Vals->>> "<<tmp<<" "<<res[tmp]<<endl;
    }
    for(int i=1;i<=n;++i)cout<<res[i]<<(i==n?"\n":" ");
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