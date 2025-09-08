#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    if(k==0)
    {
        cout<<accumulate(a.begin(),a.end(),0LL)<<endl;
        return;
    }
    vector<vector<int>>ar;
    ar.push_back(a);
    int chk=(k>6)?6:k;
    for(int i=1;i<=chk;++i)
    {
        vector<int>tmp=ar[i-1];
        int m=tmp.size();
        vector<int>fz(m+5,0);
        for(auto& it:tmp)fz[it]++;
        int mx=0;
        while(mx<fz.size() && fz[mx]>=1)mx++;
        vector<int>res(m);
        for(int i=0;i<m;++i)
        {
            if(tmp[i]>=mx)res[i]=mx;
            else res[i]=(fz[tmp[i]]==1?tmp[i]:mx);
        }
        ar.push_back(res);
    }
    if(k<=6)
    {
        cout<<accumulate(ar[k].begin(),ar[k].end(),0LL)<<endl;
    }
    else
    {
        int x=-1,y=-1;
        for(int i=1;i<7 && x==-1,y==-1;++i)
        {
            for(int j=i+1;j<7;++j)
            {
                if(ar[i]==ar[j])
                {
                    x=i,y=j-i;
                    break;
                }
            }
        }
        if(x==-1)
        {
            cout<<accumulate(ar[6].begin(),ar[6].end(),0LL)<<endl;
        }
        else
        {
            int id=x+(k-x)%y;
            cout<<accumulate(ar[id].begin(),ar[id].end(),0LL)<<endl;
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