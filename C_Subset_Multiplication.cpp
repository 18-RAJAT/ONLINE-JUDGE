#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=1;
	for(int i=0;i<n-1;++i)
	{
		if(a[i+1]%a[i])
		{
			int G1=__gcd(a[i],a[i+1]),G2=__gcd(ans,a[i]/G1);
			ans=ans*a[i]/G1/G2;
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