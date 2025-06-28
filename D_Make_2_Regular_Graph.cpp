#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
void sol()
{
    int n,m;
    cin>>n>>m;
    int ar[8][8];
    vector<pair<int,int>>vp;
    int id=0;
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            ar[i][j]=ar[j][i]=id++;
            vp.emplace_back(i,j);
        }
    }
    ull Msk=0;
    for(int i=0;i<m;++i)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        if(a>b)swap(a,b);
        int tmp=ar[a][b];
        Msk|=(1ULL<<tmp);
    }
    int ans=1e9;
    typedef tuple<array<int,8>,ull,int>cur;
    stack<cur>st;
    array<int,8>chk={0};
    st.push(cur(chk,0ULL,0));
    while(!st.empty())
    {
        auto T=st.top();
        st.pop();
        array<int,8>rem=get<0>(T);
        ull mask=get<1>(T);
        int res=get<2>(T);
        if(res==n)
        {
            int ok=1;
            for(int i=0;i<n;++i)
            {
                if(rem[i]!=2)
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
            {
                int val=__builtin_popcountll(mask^Msk);
                ans=min(ans,val);
            }
            continue;
        }
        int v=0;
        while(v<n && rem[v]==2)v++;
        for(int i=v+1;i<n;++i)
        {
            if(rem[i]==2)continue;
            int tmp=ar[v][i];
            if(mask&(1ULL<<tmp))continue;
            array<int,8>tot=rem;
            tot[v]++,tot[i]++;
            st.push(cur(tot,mask|(1ULL<<tmp),res+1));
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}