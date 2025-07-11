#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n,l,r,k,i;
	cin>>n>>l>>r>>k;
	k--;
	if(n%2==1)
	{
		cout<<l<<endl;
		return;
	}
	if(n==2)
	{
		cout<<-1<<endl;
		return;
	}
	for(i=61;~i && !(l&(1ll<<i));--i);
	if((1ll<<(i+1))<=r)
	{
		cout<<((k>=n-2)?(1ll<<(i+1)):l)<<endl;
	}
	else cout<<-1<<endl;
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