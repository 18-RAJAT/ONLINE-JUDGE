#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    multiset<char>ar;
    for(int i=0;i<10;++i)ar.insert(s[i]);
    for(int i=9;~i;--i)
    {
        auto it=ar.lower_bound('0'+i);
        cout<<*it;
        ar.erase(ar.find(*it));
    }
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