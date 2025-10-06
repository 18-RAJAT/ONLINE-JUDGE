#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    int m=n*n-k;
    if(m==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<string>g(n,string(n,'U'));
    vector<vector<int>>ar(n,vector<int>(n));
    int tmp=n*(n-(n&1)),e=m-(m&1);
    if(tmp<e)e=tmp;
    int tot=e/2;
    for(int i=n-1;i>0 && tot>0;i-=2)
    {
        for(int j=0;j<n && tot>0;++j)
        {
            g[i-1][j]='D';
            g[i][j]='U';
            ar[i-1][j]=1;
            ar[i][j]=1;
            tot--;
        }
    }
    int ret=m-e;
    if(ret>0)
    {
        if(e==tmp)
        {
            for(int j=0;j<n && ret>0;++j)
            {
                if(!ar[0][j] && ar[1][j])
                {
                    g[0][j]='D';
                    ar[0][j]=1;
                    ret--;
                }
            }
        }
        else
        {
            int ok=-1;
            for(int j=0;j+1<n;++j)
            {
                if(ar[n-1][j] && !ar[n-1][j+1])
                {
                    ok=j;
                    break;
                }
            }
            if(~ok)
            {
                g[n-1][ok+1]='L';
                ar[n-1][ok+1]=1;
                ret--;
            }
            else
            {
                for(int j=1;j<n && ret>0;++j)
                {
                    if(ar[n-1][j] && !ar[n-1][j-1])
                    {
                        g[n-1][j-1]='R';
                        ar[n-1][j-1]=1;
                        ret--;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;++i)cout<<g[i]<<endl;
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