#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int r,c;
    cin>>r>>c;
    vector<string>s(r);
    for(int i=0;i<r;++i)cin>>s[i];
    vector<int>R(r,0),C(c,0);
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            if(s[i][j]=='.')R[i]++,C[j]++;
        }
    }
    int ans=0;
    for(int i=0;i<r;++i)
    {
        int m=R[i];
        if(m<2)continue;
        int s1=0,s2=0;
        for(int j=0;j<c;++j)
        {
            if(s[i][j]=='.')
            {
                int tmp=m+C[j]-3;
                s1+=tmp,s2+=tmp*tmp;
            }
        }
        int tot=(s1*s1-s2)-m*(m-1)*(m-2);
        ans+=tot;
    }
    for(int j=0;j<c;++j)
    {
        int m=C[j];
        if(m<2)continue;
        int s1=0,s2=0;
        for(int i=0;i<r;++i)
        {
            if(s[i][j]=='.')
            {
                int Y=m+R[i]-3;
                s1+=Y;
                s2+=Y*Y;
            }
        }
        int tot=(s1*s1-s2)-m*(m-1)*(m-2);
        ans+=tot;
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}