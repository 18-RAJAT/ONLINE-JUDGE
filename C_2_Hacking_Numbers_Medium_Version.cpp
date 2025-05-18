#include<bits/stdc++.h>
using namespace std;
#define int long long
int ask(string q)
{
    cout<<q<<endl<<flush;
    int x;
    if(!(cin>>x) || x==-1)exit(0);
    return x;
}
void sol()
{
    int n;
    cin>>n;
    ask("mul 9");
    ask("digit");
    ask("digit");
    ask("add "+to_string(n-9));
    ask("!");
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