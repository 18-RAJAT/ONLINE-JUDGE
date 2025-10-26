#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size(),ans=1e9;
    vector<string>ar={"00","25","50","75"};
    for(auto& it:ar)
    {
        int j=it.size()-1,cnt=0;
        for(int i=n-1;~i;--i)
        {
            (s[i]==it[j])?j--:cnt++;
            if(j<0)
            {
                ans=min(ans,cnt);
                break;
            }
        }
    }
    cout<<ans<<endl;
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