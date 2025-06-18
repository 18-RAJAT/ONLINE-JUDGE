#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;++i)cin>>a[i];
	cout<<min(abs(a.back()-k)+a.back()-a[0],abs(k-a[0])+a.back()-a[0])<<endl;
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