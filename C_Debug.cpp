#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s,ans;
    cin>>s;
    int ct=0;
    for(auto& it:s)
    {
        if(it=='W')ct++;
        else if(it=='A')
        {
            if(ct>0)
            {
                ans+='A';
                while(ct--)ans+='C';
                ct=0;
            }
            else ans+='A';
        }
        else
        {
            if(ct>0)
            {
                // ans+='C';
                while(ct--)ans+='W';
                ct=0;
            }
            // else ans+='C';
            ans+=it;
        }
    }
    while(ct--)ans+='W';
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}