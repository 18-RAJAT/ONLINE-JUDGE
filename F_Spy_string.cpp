#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;++i)
    {
        for(char ch='a';ch<='z';++ch)
        {
            string ans=a[0];
            ans[i]=ch;
            int ok=1;
            for(int j=0;j<n;++j)
            {
                int tot=0;
                for(int k=0;k<m;++k)tot+=(a[j][k]!=ans[k]);
                if(tot>=2)
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
            {
                cout<<ans<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
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