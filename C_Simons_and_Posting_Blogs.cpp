#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n);
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        a[i].resize(x);
        for(int j=0;j<x;++j)cin>>a[i][j];
    }
    for(int i=0;i<n;++i)
    {
        reverse(a[i].begin(),a[i].end());
        vector<int>v=a[i];
        a[i].clear();
        set<int>st;
        for(auto& it:v)
        {
            if(!st.count(it))
            {
                st.insert(it);
                a[i].push_back(it);
            }
        }
    }
    vector<int>res(n),ans;
    set<int>st;
    for(int i=0;i<n;++i)
    {
        vector<int>mn;
        int ok=-1;
        for(int j=0;j<n;++j)
        {
            if(!res[j])
            {
                if(ok==-1 || a[j]<mn)
                {
                    mn=a[j],ok=j;
                }
            }
        }
        res[ok]=1;
        for(auto& it:mn)
        {
            ans.push_back(it);
            st.insert(it);
        }
        for(int j=0;j<n;++j)
        {
            vector<int>v=a[j];
            a[j].clear();
            for(auto& it:v)
            {
                if(!st.count(it))a[j].push_back(it);
            }
        }
    }
    for(auto& it:ans)cout<<it<<" ";
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