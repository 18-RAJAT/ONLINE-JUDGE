#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    cout<<*min_element(s.begin(),s.end())<<endl;
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