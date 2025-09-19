#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto& it:a)cin>>it;
    int sum=0;
    for(auto& it:a)sum+=it;
    cout<<(sum%3==0?to_string(1)+" "+to_string(n-1):"0 0")<<endl;
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