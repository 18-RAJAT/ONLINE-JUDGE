#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string a,b;
    cin>>a>>b;
	reverse(b.begin(),b.end());
	cout<<(a==b?"YES":"NO");
}
signed main()
{
    sol();
    return 0;
}