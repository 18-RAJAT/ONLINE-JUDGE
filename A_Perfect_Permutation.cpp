#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n;
	cin>>n;
	if(n&1)cout<<-1;
	else
	{
		for(int i=n;i>=1;--i)cout<<i<<" ";
	}
}
signed main()
{
	sol();
	return 0;
}